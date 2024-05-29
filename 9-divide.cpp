/*
Write a program where the user can enter a dividend and a divisor, 
until the he/she enters (Yes/No) that he/she no longer wants to perform a calculation.

The division is to be carried out at each loop pass.
If the divisor is 0, an error message occurs.

In addition, each (valid) result should be saved to a file,
 including the calculation.

Example content of the file:

10/5=2
40/10=4

When the program is restarted,
the new calculations are added to the end of the file.

If the file is write-protected, an error message is thrown.

When exiting the program, the contents of the file should be displayed again.
*/
#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

int divide (int a, int b)
{
    if(b==0)
        throw (string) "Division by Zero is not allowed";
        return a/b;

}
int main(){
    int dividend;
    int divisor;
    bool input =1;
    string s;
    ifstream fileoutput("results,txt" , ios::in );
    ofstream fileinput("results.txt" , ios::app);

    do
    {
        cout <<"Dividend: ";
        cin >> dividend;
        cout << "Divisor: " ;
        cin >> divisor;
        try {
            cout << divide(dividend,divisor) << endl;
            if (fileinput.good())
                fileinput << dividend << "/" << divisor << divide(dividend,divisor) << endl;
            else
                throw (string) "File could not be opened" ;

        }
        catch(const string msg)
        {
            cerr << msg << endl;
        }
        cout << "Continue? [1] yes [0] No" << endl << "input: ";
        cin >> input;
    }while(input !=0);
    fileinput.close();

    while (!fileoutput.eof())
    {
        getline(fileoutput,s);
        cout << s << endl;
    }
    fileoutput.close();
    return 0;

}