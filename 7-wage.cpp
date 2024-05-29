/*
A person file contains the four following datasets:


Persno Name Hours HourlyWage
100 Meier 152 9.20
102 Kunze 165 11.05
108 Weber 190 15.50
111 Berger 80 14.20
 
Define a appropriate class. Create a txt file, which contains the above data set
 and read it.
Save these four data sets in an array.

The data records are then to be displayed formatted, whereby in the 5th column the
GrossWage (Hours * HourlyWage) is to be displayed.
*/
#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

class Person
{
    private:
        int person,hours;
        string name;
        float hourlywage;
    public:
        Person()    {};
        void setPerson(int p){person = p;}
        void setName(string n) { name = n;}
        void setHours (int s){ hours =s;}
        void setHourlyWage(float sl){ hourlywage = sl;} 
        void displayData();
};
void Person::displayData(){
    cout << person << "\t"<< name << "\t"<< hours << "\t" << hourlywage << "\t" << hours * hourlywage<< endl;

}
int main(){
    ifstream fileReader ("7-person.txt");
    int i = 0;
    Person personlist[4];

    int p,s;
    string n;
    float sl;
    if (fileReader.good())
    {
        while(fileReader >>p >> n >>s >>sl)
        {
            personlist[i].setPerson(p);
            personlist[i].setName(n);
            personlist[i].setHours(s);
            personlist[i].setHourlyWage(sl);
            i++;
        }
    }
    else
    {
        cout <<"File could not be opened.";
        return 0;
    }
    cout << "PersNo\tName\tHours\tHourslyWage\tGrossWage" << endl;
    for(int i = 0; i < 4 ; i++)
    personlist[i].displayData();

return 0;
}

