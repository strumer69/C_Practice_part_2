/*
Create a text file with any content.
Then read the content of the file and display the single lines in the
console.
Enter the line number for each line.
*/

#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;
int main()
{
     ifstream file;
     file.open("text2.txt" , ios::in);
     int i = 0;
     string s;

     while (!file.eof())
     {
         getline(file,s);
         cout << ++i<< " ." << s << endl;
     }
     file.close();

}

