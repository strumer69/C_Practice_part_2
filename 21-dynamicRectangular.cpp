
/*Create a class "Rectangle", which has a length and width as data members.
Create a suitable constructor that fills the data members with data.

A dynamic object is to be created in the main function.
Create a new object until either the length or width is zero.
For each newly created object, 
the constructor is to be called and the area calculated and
displayed on the screen.

Finally, release the memory of the object.
*/

#include <iostream>
#include <cstdlib>

using namespace std;

class Rectangle{
   private: double length, width;

public:
Rectangle() {};
Rectangle(double x, double y) : length(x), width(y) {};
double area()
    {
     return length*width;
    };
};

int main()
{
//Creating an object of the class Rectangle in the dynamic memory
Rectangle *R = new Rectangle(); 
int l, w;

do
{
cout << "Length: ";
cin >> l;
cout << "Width: ";
cin >> w;
if(l==0 || w==0)
break;

R = new Rectangle(l,w);
cout << "Area: " << R->area() << endl;

//Release memory
delete R;

}while(true);


return 0;
};
