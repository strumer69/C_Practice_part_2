#include <iostream>
#include <cstdlib>
using namespace std;
class Birthday
{
    private:
        int year,month,day;
    public:
        //default constructor
        Birthday(){}
        
        //constructor with member initialize list
        Birthday(int j,int m, int t):year(j),month(m), day(t){}

        void setYear(int j){year =j;}
        void setMonth(int m){month =m;}
        void setDay(int t){ day =t;}
        void displayData(){cout << day << "-" << month << "-" << year << endl;}

};

int main()
{
    Birthday Heinz;
    Birthday *Peter;

    Heinz.setYear(1964);
    Heinz.setMonth(1);
    Heinz.setDay(0);

    Peter= &Heinz;
    Peter->setMonth(6);
    Heinz.setMonth(3);


    Heinz.displayData();
    Peter->displayData();


}