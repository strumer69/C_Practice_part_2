#include <iostream>
#include <cstdlib>
using namespace std;

int main (){

    int x=10, y=10 ,*xptr, **ptrptr;
    cout << "x= " << x <<endl;

    xptr = &x;// pointer xptr is assigned the address of x as value
    *xptr = 20; // the variable which xptr points to is assigned value 20
    cout << "x= "<< x << " and * ptr= " << *xptr << endl;

    ptrptr=&xptr;//Pointer ptrptr is assigend the adress of pointer xptr
    **ptrptr=30;// variable x is assigned value 30 via pointer ** ptrptr
    cout << "x= "<< x << "  *xptr= " << *xptr << " and **ptrptr= "<< **ptrptr <<endl;

    *ptrptr=&y;//the pointer now points to y
    **ptrptr=40; //variable y is assigned valu 40, since ptrptr points to ptr and ptr is now set to y
    cout << "x= " << x << " ,y=" << y << " , *xptr=" << *xptr << " and **ptrptr= "<<**ptrptr << endl;
    

    return 0;
}