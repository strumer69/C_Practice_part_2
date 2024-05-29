/*
Calculate the volume of a cuboid within a function.
If one of the values entered is negative or zero,
 an error message should be thrown.
If the values are correct, the result is to be displayed on the screen.
*/
 #include <iostream>
 #include <cstdlib>
 using namespace std;

 int volume(int l , int b , int h)
 {
    if( l<= 0)
        throw (string) " Length is equal to 0 or negative." ;
    else if ( b<=0)
        throw (string) "width is equal to 0 or negative";
    else if ( h<0)
        throw(string) "Height is equal to 0 or negative";
    else 
        return (l*b*h);
 }

int main()
    {
        int length , width, height;

        cout << "length " ;
        cin >> length;
        cout << " width :";
        cin >> width;
        cout << " height :";
        cin >> height;

        try 
        {
            cout << volume (length,width,height) << "cm\xFC"<< endl;

        }

        catch (const string msg)
        {
            cerr << msg << endl;
        }
    return 0;
}
        
