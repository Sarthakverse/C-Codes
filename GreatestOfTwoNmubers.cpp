#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int num1,num2;
    cout<<"Enter num1 and num2:";
    cin>>num1>>num2;
    if(num1==num2)
    {
        cout<<"numbers are equal";
    }
    else if(num1>num2)
    { 
        cout<<"num1 is greater than num2";
    }
    else 
    {
        cout<<"num2 is greater than num1";
    } 
    return 0;
}
