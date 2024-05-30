/*
Write a program that contains a function " prosumo ". 
An array is passed to this function. 
It returns the sum and the product of the array elements.

Create the function based on pointers.
The two results are determined using pointers.
A value specifying the number of elements in the array may be passed to the function.

*/
#include <iostream>
#include <cstdlib>

using namespace std ;

void prosumo (int, float *, float *, float *);

int main ( void )
{
float f []={1.0, 2.5, 3.0, 7.25}, resultp, results;

prosumo (4, f , & resultp, & results);
cout << "Product: " << resultp << endl << "Sum: " << results << endl ;
}

void prosumo (int n , float *F , float *x , float * y )
{
int i;
*x=1.0;
*y=0.0;
for (i=0; i<n ; i++)
{
*x *= F[i];
*y += F[i];
}
}
