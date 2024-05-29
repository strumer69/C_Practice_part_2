#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int x=20;
    int *pntrx= &x; //pass the address of x to me not the value
    int z = *pntrx;
    cout << z <<endl;
    cout<<  pntrx<<endl;
    cout << *pntrx <<endl;
    cout << &*pntrx<<endl;

    //example 2
    int a=18 , *p;
    p=&a;
    cout <<" address of a" <<p <<endl;
    cout << " mayahtavi address a, which is value of a:" << *p<<endl;
    cout << "address of the pointer of the a  which is adress of p:" << &p <<endl;

}