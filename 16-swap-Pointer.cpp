/*
Write a function "swap" that swaps the values of two entered integer numbers.

The numbers are to be passed as by pointer 
(the changed values in the function are therefore also changed in the main function).

Add a simple main function that tests the function swap.
*/
#include "cstdlib"
#include "iostream"
using namespace std;

void swap(int *a,int *b);// declaration- 2 pointer as input
//define:
void swap (int *a,int *b)
{
    int c=*a;
    *a=*b;
    *b = c;

}

int main(){
    int a;
    int b;

    cout << "value for a:";
    cin >> a;
    cout << "value for b:";
    cin >> b;

    cout << a << "&" << b << endl;
    swap (&a,&b);
    cout << a<< " &" << b << endl;

}


