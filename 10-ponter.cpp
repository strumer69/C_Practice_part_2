#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int x=20;
    int *pntrx= &x;
    int z = *pntrx;
    cout << z<<endl;
}