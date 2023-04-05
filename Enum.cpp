//user defined data type
#include<iostream>
using namespace std;
enum day{mon,tue,wed,thu,fri,sat,sun};
int main()
{
    day d;//day is now a datatype...
    d=wed;
    cout<<d<<endl;
    return 0;
}