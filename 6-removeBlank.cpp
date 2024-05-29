// Write a program that replaces all multiple blanks by a single blank from a text 
//in a file and displays the text on the screen.
// The new output should then be saved in an separate file.
#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;
int main (){
    char c, previous ='a'; //initializing
    ifstream reader;
    ofstream writer;

    reader.open("6-text.txt" , ios::in);
    writer.open ("6-copy.txt");

    if(reader.good())
    {
        if (writer.good())
        {
            while (reader.get(c)){
                if(!(previous ==' ' && c == ' ')){
                    cout << c;
                    writer.put(c);
                }
                previous = c;
            }

            
        }
        else
            cout << "file copy.text cannot be opened" << endl;
    }
    else
    cout <<" file text.txt cannot be oppend"<< endl;

    reader.close();
    writer.close();

}