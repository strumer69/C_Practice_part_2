#include <iostream>
#include <cstdlib>
using namespace std;

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
int main (){
    int a=10 , b=13;
    int *c , *d;
    c=&a;
    d=&b;
    cout << " a:" << a << " b: "<< b << endl;
   
    return 0 ;
}
    