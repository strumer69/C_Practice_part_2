/*
Write a function "stringlength".
A char array, which can contain 50 characters and returns the 
length of this character string, is passed to this function.
After entering the character string, the number of characters is to be output.

Tip: The end of a string is marked with \0.

*/


#include <iostream>

using namespace std ;

int stringlength(char *);//decla

//define
int stringlength (char *w)
{
int i=0;
while ( w[i]!= '\0')
i ++;
return i ;
}

int main ()
{
char word [50];
cout << "Ender a word : ";
cin >> word ;
cout << "The word" << word << " consists of " << stringlength(word) << " characters." << endl ;
}

