#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter a,b and c:";
    cin>>a>>b>>c;
    if(a==b&&b==c||a==b||a==c||b==a)
   {cout<<"enter distinct numbers please";
    return 0;}
    if(a>b&&a>c)
    cout<<"a is largest"<<endl;
    else if(b>c&&b>>a)
    cout<<"b is largest"<<endl;
    else
    cout<<"c is largest"<<endl;
    return 0;
}