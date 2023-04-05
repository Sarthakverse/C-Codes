#include<iostream>
using namespace std;
int main()
{
    int x=40,y;
    y=x>>1;
    cout<<y<<endl;//x>>1 means x/2^i;
            //so you get 40/2^1=20;
    return 0;
}