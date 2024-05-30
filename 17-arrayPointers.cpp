/*
The following array is given:

int numbers[] = {10,20,30};

Pass the beginning and the end of the array as pointers to a function.
Increase each value by 1 until the end is reached.
Then output the new values (11,21,31) in a function.
The output is again based on the beginning and the end of the array.

Tip: Arrays are passed as pointers as follows:

myFunction(numbers+2);
*/
#include "cstdlib"
#include "iostream"
using namespace std;

void increment_all(int* start, int* stop)
{
    int * current = start;
    while (current != stop){
        ++(*current);
        ++ current;
    }
}

void print_all (const int* start , const int *stop)
{
    const int * current = start;
    while( current !=stop){
        cout << *current << '\n';
        ++current;
    }
}

int main()
{
    int numbers[] ={ 10,20,30};
    increment_all(numbers,numbers+3);
    print_all(numbers,numbers+3);
}