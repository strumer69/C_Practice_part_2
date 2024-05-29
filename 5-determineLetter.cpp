// Write a program that reads text from a file.
// The user should then be able to enter a letter. 
// The program should determine how often the letter appears within the text.
#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;
int main(){
    char c,letter;
    int number =0;
    ifstream file;

    cout << "Insert letter: ";
    cin >> letter;

    cout << "The text: " << endl;

    file.open ("5-demo.txt" , ios::in);
    while (file.get(c))
    {
        if(c== letter) number ++;
        cout <<c;

    }

    file.close();
    cout << endl<< "contains the letter" << letter << " " << number << " times" << endl;
    return 0;
}