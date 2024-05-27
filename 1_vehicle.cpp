#include "cstdlib"
#include "iostream" 
using namespace std; 

class Vehicle 
{ 
private:
string brand;
string licencePlate;
int ps;
int constructionYear;

public: 
//default constructor
Vehicle(){}
// constructor with member initializing list
Vehicle(string br,string lp, int ps_, int cy)
:brand(br),licencePlate(lp),ps(ps_),constructionYear(cy){}

void displayData(){ 
cout << " Brand: " << brand ;
cout << " Licence Plate: " << licencePlate ;
cout << " PS: " << ps ;
cout << " Construction Year: " << constructionYear<< endl; 
}

string GetBrand(){ return brand;}
string GetLicencePlate(){return licencePlate;}
int GetPs(){return ps;}
int GetConstructorYear(){ return constructionYear;}

}; 

class Car : public Vehicle
{
    private:
        float MaxSpeed;
    public:
    Car(){}
    Car(string br, string lp, int ps_ , int cy , float MS)
    :Vehicle(br,lp, ps_,cy), MaxSpeed(MS){}

    void displayData(){
    cout << " Brand: " << GetBrand();
    cout << " Licence Plate: " << GetLicencePlate() ;
    cout << " PS: " << GetPs();
    cout << " Construction Year: " << GetConstructorYear() ; 
    cout << " max speed "<< MaxSpeed <<endl;
    }
};
class Truck : public Vehicle
{
    private:
        float maxLoad;
        int NumberWheels;

    public:
    Truck(){}
    Truck(string br,string lp,int ps_ , int cy ,float ML, int NW)
    :Vehicle(br,lp,ps_,cy),maxLoad(ML),NumberWheels(NW){}

    void displayData(){
    cout << " Brand: " << GetBrand();
    cout << " Licence Plate: " << GetLicencePlate() ;
    cout << " PS: " << GetPs();
    cout << " Construction Year: " << GetConstructorYear() ; 
    cout << " max load "<< maxLoad;
    cout << " Number wheels: " << NumberWheels << endl;
    }
};

int main(){ 
    Vehicle vehicle0;
    Vehicle vehicle1("saipa","aaa",2,1999);
    Vehicle vehicle2("Benz","bbb",3,2000);
    Car car1;
    Car car2("1","2",3,1990,5);
    Truck truck1;
    Truck truck2("1","2",3,1998,5,6);
    cout<< "-1--------------"<<endl;
    vehicle0.displayData();
    cout<< "-2--------------"<<endl;
    vehicle1.displayData();
    cout<< "-3--------------"<<endl;
    vehicle2.displayData();
    cout<< "--4-------------"<<endl;
    car1.displayData();
    cout<< "---5------------"<<endl;
    car2.displayData();
    cout<< "----6-----------"<<endl;
    truck1.displayData();
    cout<< "-----7----------"<<endl;
    truck2.displayData();
return 0; 
}