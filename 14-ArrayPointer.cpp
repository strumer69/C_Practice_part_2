#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
    int x=3;
    int *pointer = &x;
    cout << "address which pointer points to is: " << pointer << endl;
    cout << " address of x :" << &x << " and pointer: "<< pointer << endl;
    cout << "address of pointer: " << &pointer <<endl <<endl;

    cout << "Value of x:" <<x <<endl;
    cout << "value opf pointer:" << &x<<endl;
    cout <<"enter value of x:";

    cin>> x;
    cout<< endl;
    cout << "value of x:" <<x << endl;
    cout << "valueof pointer:"<< *pointer <<endl;

    int array[5]={1,2,3,4,5};
    cout << "address of the first array element:"<< array << endl;
    cout << " address of the first array element:" << &array<< endl;
    cout << "address of the first array element is:" << &array[0]<< endl <<endl;

    cout << "value of first array element:" << array[0]<< endl;
    cout << "value of the first array element :" << *array <<endl;// ma yahtavi

    cout << endl;
    cout << "value of the third pointer array:"<<array[2]<<endl;
    // cout << "value of the 3th pointer array :"<< *arraypointer[2];// does not work
    cout<< "value of the 3th pointer array:"<< *(array+2)<<endl;

    cout << endl;
    cout << "display valu & address  of the array: " << endl;
    for (int i=0 ; i < 5 ; ++i)
    {
        cout << "array["<<i << "]= "<< array[i]<<endl;

        cout << "&array["<<i << "]= "<< &array[i]<<endl;
    }
}