/*
Create an array with a user-specified memory area.
The user should then be able to enter any numbers
that are stored in the array.
Output the stored numbers again.
Finally, release the memory of the array.
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main () {
int i, n;
int *p ;
cout << "How many numbers do you want to enter ? ";
cin >> i ;

p = new int [i];

for (n=0; n<i ; n ++) {
cout << "Please insert a number : ";
cin >> p [n];
}

cout << "You have entered the following numbers : ";
for (n=0; n<i ; n ++)
cout << p [n] << " ";

delete [] p ; // release the memory used by the array
return 0;
}
