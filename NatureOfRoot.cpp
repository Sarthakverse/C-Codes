#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    system("cls");
    float a,b,c,D,x1,x2;
    cout<<"enter coeffecients of ax^2+bx+c=0:";
    cout<<"enter a:";
    cin>>a;
    cout<<"enter b:";
    cin>>b;
    cout<<"enter c:";
    cin>>c;
    D=(b*b)-(4*a*c);
    x1=(-b+sqrt(D))/(2*a);
    x2=(-b-sqrt(D))/(2*a);
    if(D==0)
    cout<<"roots are real and equal🫡🫡"<<"\n"<<x1<<"\n"<<x2;
    else if(D>0)
    cout<<"roots are real but distinct🙂🙂"<<"\n"<<x1<<"\n"<<x2;
    else
    cout<<"roots are imaginary🥲🥲";
    return 0;

}