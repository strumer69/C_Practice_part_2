/*Create 3 instances each of the Car class and the Truck class (from "exercise 1 - Vehicles", Chapter:  Repetition of course part 1: Inheritance).

The instances are to be created dynamically (as pointers via new).
The data are to be entered by the user via the console.

Hint: Use a loop (for or while or do while).
Then output the data from all instances on the screen (using a loop).
*/

#include "cstdlib"
#include "iostream"
using namespace std;

class Vehicle
{
protected:
string brand;
string licencePlate;
int ps;
int constructionYear;

public:

//default constructor
Vehicle() {}

//constructor with member initialization list
Vehicle(string br, string licence, int ps, int cy): brand(br), licencePlate(licence), ps(ps), constructionYear(cy) {}

void displayData(){
cout << "Brand: " << brand << endl;
cout << "Licence Plate: " << licencePlate << endl;
cout << "PS: " << ps << endl;
cout << "Construction Year: " << constructionYear << endl;
}

};


class Car: public Vehicle {
private:
float maxSpeed;
public:
//default constructor
Car() {}
//constructor with member initialization list
Car(string br, string licence, int ps, int cy, float max): Vehicle(br, licence, ps, cy), maxSpeed(max) {}

void displayData(){
Vehicle::displayData();
cout << "Maximum Speed: " << maxSpeed << endl;
}


//Static function can also be called without an instance
static Car* init (Car *p) {
string brand, licencePlate;
int ps, constructionYear;
float maxSpeed;
cout << "Brand: " << endl;
cin >> brand;
cout << "Licence plate: " << endl;
cin >> licencePlate;
cout << "Amount PS: " << endl;
cin >> ps;
cout << "Construction year: " << endl;
cin >> constructionYear;
cout << "Maximum speed: " << endl;
cin >> maxSpeed;
p = new Car(brand, licencePlate, ps, constructionYear, maxSpeed);
return p;
}
};

class Truck: public Vehicle {
private:
float maxLoad;
int numberWheels;
public:
//default constructor
Truck() {}
//constructor with member initialization list
Truck(string br, string licence, int ps, int cy, float max, int no): Vehicle(br, licence, ps, cy), maxLoad(max), numberWheels(no) {}

void displayData(){
Vehicle::displayData();
cout << "Maximum Load: " << maxLoad << endl;
cout << "Number of Wheels: " << numberWheels << endl;
}

static Truck* init (Truck *l) {
string brand, licencePlate;
int ps, constructionYear, numberWheels;
float maxLoad;
cout << "Brand: " << endl;
cin >> brand;
cout << "Licence plate: " << endl;
cin >> licencePlate;
cout << "Amount PS: " << endl;
cin >> ps;
cout << "Construction year: " << endl;
cin >> constructionYear;
cout << "Maximum Load: " << endl;
cin >> maxLoad;
cout << "Number of Wheels: " << endl;
cin >> numberWheels;
l = new Truck(brand, licencePlate, ps, constructionYear, maxLoad, numberWheels);
return l;
}
};


int main(){

Car *p[3];
Truck *l[3];

cout << endl << ".................... Insert Data for Car .........................." << endl;
for (int i = 0; i < 3; i++) {
cout << "Car " << i+1 << ": " << endl << endl;
//init function is a static function that can be called without an instance
//Passed parameter is pointer to the ith element --> call by reference

p[i] = Car::init(p[i]);
}

cout << endl << ".................... Insert Data for Truck .........................." << endl;
for (int k = 0; k < 3; k++) {
cout << "Truck " << k+1 << ": " << endl << endl;
//init function is a static function that can be called without an instance
//Passed parameter is pointer to the ith element --> call by reference
l[k] = Truck::init(l[k]);
}

cout << endl << "................. Display Data about Car .................." << endl;
for (int j = 0; j < 3; j++) {
cout << "Car " << j+1 << ": " << endl;
p[j]->displayData();
}

cout << endl << "................. Display Data for Truck.................." << endl;
for (int j = 0; j < 3; j++) {
cout << "Truck " << j+1 << ": " << endl;
l[j]->displayData();
}

return 0;
};
