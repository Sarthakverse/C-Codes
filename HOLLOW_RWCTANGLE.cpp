#include<iostream>
using namespace std;
int main()
{
    int n=5,i,j;
    //cout<<"enter n:";
    //cin>>n;
    for(i=1;i<=n-1;i++)
    {
        for(j=1;j<=n;j++)
        {
          if(i==1||i==n-1||j==1||j==n)
          cout<<"*";
           else
           cout<<" ";
          
        } 
        cout<<"\n";
    }
    return 0;
}