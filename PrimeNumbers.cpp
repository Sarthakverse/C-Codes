#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter n:";
    cin>>n;
    if(i==0||i==1)
    cout<<"not prime";
    if(i==2)
    cout<<"prime number";
    for(i=2;i<n;i++)
    {
        if(n%i!=0)
        continue;
        else
        {
            cout<<"not prime";
            return 0;
        }
    }
    cout<<"prime number";
    return 0;
}