#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a,b,c,d,e;
    cout<<"enter coeffecient in ax^2+bx+c=0:";
    cin>>a>>b>>c;
    d=(-b+sqrt(b*b-4*a*c))/(2*a);
    e=(-b-sqrt(b*b-4*a*c))/(2*a);
    cout<<"roots are "<<d<<" "<<e;
    return 0;
}