/*A player is to fight a total of 3 monsters to find a treasure.

Create a class "Creature" that has the data members "healthPoints" and "damage".
Create a subclass "Player" that additionally has the data member "potionOfLife".

The player has 100 life points at the beginning and one potion to use.

A menu is to appear which always displays the player's current healthPoints.
The following options are available:

- Attack
A new monster (creature) appears whose number of healthPoints is random (between 30 and 50).
--> Always create a new object of the type "Creature" and assign it to the dynamic object.
The player's and the monster's healthPoints are displayed.
The attack damage is determined by a random number (between 10 and 20).
The player attacks the monster first.
If the monster has less than 1 healthPoints, the message that it has died appears.
If the monster is not dead, the monster will then attack the player.
If the player has less than 1 healthPoints, the message that he has died appears and how many creatures he has defeated already.

- Drink Potion of Life
The number of the player's healthPoints increase (randomly between 20 and 30)
The potionOfLife can only be used once.

- Flee
The player runs away [program exits]. The number of defeated creatures is displayed.

If the player has defeated 3 creatures, the message appears that he has found the treasure [program exits].
If no potionOfLife has been used, the message appears that the player is a "true hero".

Hint:

Include the library <ctime>.
A random number is created as follows:

srand(time(NULL)); // Random number re-initialized based on time, so that not always the same values occur
int randomNumber = rand() % (maxNumber - minNumber) + minNumber; // Example: maxNumber = 20, minNumber = 10 --> Random number between 20 and 10

*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Creature
{
protected:
    int healthPoints, damage;
public:
Creature() {};
Creature(int l) : healthPoints(l) { }; // Constructor with member initializer list
    void sethealthPoints(int); // Set healthPoints of Creature
    int gethealthPoints();  // Return healthPoints of Creature
    void setDamage(int); // Set damage of Creature
    int getDamage();  // Return damage of Creature
void attack(Creature*);

};

void Creature::sethealthPoints(int healthPoints)
{
    this->healthPoints = healthPoints;
}

int Creature::gethealthPoints()
{
    return healthPoints;
}

void Creature::setDamage(int damage)
{
    this->damage = damage;
}

int Creature::getDamage()
{
    return damage;
}

void Creature::attack(Creature *k)
{
k->healthPoints = k->healthPoints - this->getDamage();
}

class Player : public Creature
{
private:
bool potionOfLife;
public:
Player() : Creature(100), potionOfLife(true) {}; // Constructor with member initializer list. Player has 100 helthPoints and one potionOfLife in the beginning
void setpotionOfLife(); // Use potion Of Life
bool getpotionOfLife(); // True = potionOfLife can be used | False = potionOfLife can not be used
};

void Player::setpotionOfLife()
{
    this->potionOfLife = false; // Player has no more potionOfLife
    srand(time(NULL)); // initialize random number
    int randomHealthPoints = rand() % (30 - 20) + 20; // Random number between 20 and 30
    this->healthPoints +=randomHealthPoints; // healthPoints of Player increase
    cout << " You have received "<< randomHealthPoints << " health points!" << endl;
}

bool Player::getpotionOfLife()
{
    return potionOfLife;
}

int main()
{
bool flee = false;
int defeat_Creatures = 0;
int selection;
int randomHealthPoints;
int randomDamage;
    Creature *monster = new Creature();
    Player *player = new Player();
do
{
// system("cls");
cout << "Health points: " << player->gethealthPoints() << endl << endl;
cout << "Ñ-MenueÑ" << endl;
cout << "[1] Attack" << endl;
cout << "[2] Drink potion of life" << endl;
cout << "[3] Flee" << endl;
cout << "Select: ";
cin >> selection;

switch(selection)
{
case 1:
{
int tmp = 0;
// system("cls");
monster = new Creature(); // New creature appears
srand(time(NULL));              // initialize generator to generate random numbers
    randomHealthPoints = rand() % (50-30) + 30; // Random number between 50 and 30
monster-> sethealthPoints(randomHealthPoints); // Set health points
do
{
cout << "The player has " << player->gethealthPoints() << " health points." << endl; // Output health points of player
cout << "The monster has " << monster->gethealthPoints() << " health points." << endl << endl; // Output health points of monster
   
    randomDamage = rand() % (20 - 10) + 10; // Random number between 20 and 10
    player->setDamage(randomDamage);  // Set damage for player
randomDamage = rand() % (20 - 10) + 10; // Random number between 20 and 10
monster->setDamage(randomDamage);  // Set damage for monster  
   
    player->attack(monster); // Player attacks monster
    cout << "Player has caused " << player->getDamage() << " damage." << endl; // Output the damage caused by the player
   
    if(monster->gethealthPoints() <= 0) // If the monster has less than one health points it dies
    {
    cout << "Monster died!" << endl;
    defeat_Creatures++;
    if(defeat_Creatures == 3) // If the player defeats 3 creatures he wins
    {
    cout << endl << "You won! You found the treasure!" << endl;
    if(player-> getpotionOfLife()) // If the player still has the potion of life another message appears:
    cout << " ...and that without using the potion of life! You are a real hero!" << endl;
    cout << "Number of defeated creatures: " << defeat_Creatures << endl;
    selection = 3;
}
    break;
}
else
monster->attack(player); // If the monster sill has a health point it attacks

    cout << "Monster has caused " << monster->getDamage() << " damage." << endl << endl; // Output the damage caused by the monster
   
    if(player->gethealthPoints() <= 0) // If the player has less than one health points he dies
    {
    cout << "You died!" << endl;
    cout << "Number of defeated creatures: " << defeat_Creatures << endl;
    selection = 3;
    return 0;
}
   
}while(true);
// system("pause");
break;
}
case 2:
{
// system("cls");
if(player->getpotionOfLife())
player->setpotionOfLife();
else
cout << "There is no potion of life available." << endl;
// system("pause");
break;
}
case 3:
{
cout << endl << "You have fled!" << endl;
cout << "Number of defeated creatures: " << defeat_Creatures << endl;
break;
}
default:
{
cout << endl << "Invalid selection!" << endl;
// system("pause");
break;
}
}
}while(selection != 3);

    delete monster;
    delete player;

    return 0;
} 