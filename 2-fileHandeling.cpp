#include <fstream>
#include <cstdlib>

using namespace std;
int mian()
{
    fstream f;
    f.open("test.txt",ios::out);
    f<< "this is written into" << endl;
    f.close();
return 0;

}