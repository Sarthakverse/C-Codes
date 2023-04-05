#include<iostream>
using namespace std;
typedef int marks;
int main()
{
    marks m1,m2,m3;
    float avg;
    cout<<"enter marks m1,m2,m3:";
    cin>>m1>>m2>>m3;
    avg=(m1+m2+m3)/3;
    if(m1>50||m2>50||m3>50)
    cout<<"enter marks correctly";
       if(avg>=60)
       cout<<"A";
       else if(avg>=35&&avg<60)
       cout<<"B";
       else
       cout<<"you need to study !!";
       return 0;
}