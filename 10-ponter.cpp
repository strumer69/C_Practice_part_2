#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    
    //example 5 -
    int a=10 , b=13;
    int *c , *d;
    c=&a;
    d=&b;
    cout << " a:" << a << " b: "<< b << endl;
    // call by value 
    void exchange(int x, int y){
        int tmp =x;

        x=y;
        y=tmp;
    }
    // call by reference(as reference)
    void exchangeR(int &x, int &y){
        int tmp =x;
        x=y;
        y=tmp;
    }
    //call by reference (as pointer)
    void exchangeP (int *x, int *y){
        int tmp =*x;
        *x=*y;
        *y=tmp;
    }
    
    //example 4 - Reference
    // int x;
    // int &rx=x; // equal to int& rx=x;
    // rx =10; // has the same effect as x=10;



    // //example 3
    // int array[]={1,2,3,4,5};
    // cout <<"address of 1th array:" << array <<endl;
    // cout << "address of first array:" << &array[0]<<endl;
    // cout << "value of first array element:" << *array << endl;
    // cout << "value of first array element:"<< array[0]<< endl;
    // cout << "value of 2th array element:" << &array[1] << endl;


    // example 2
    // int x=20;
    // int *pntrx= &x; //pass the address of x to me not the value
    // int z = *pntrx;
    // cout << z <<endl;
    // cout<<  pntrx<<endl;
    // cout << *pntrx <<endl;
    // cout << &*pntrx<<endl;

    //example 1
    // int a=18 , *p;
    // p=&a;
    // cout <<" address of a" <<p <<endl;
    // cout << " mayahtavi address a, which is value of a:" << *p<<endl;
    // cout << "address of the pointer of the a  which is adress of p:" << &p <<endl;

}