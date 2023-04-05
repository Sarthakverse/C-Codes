#include<iostream>
using namespace std;
int main()
{
    long long int n;
    long long fact=1;
    int i=1;
    cout<<"enter n:";
    cin>>n;
    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
   cout<<fact;
}