#include<iostream>
using namespace std;
int main()
{
  int i,j,n;
  cout<<"enter n:";
  cin>>n;
  for(i=1;i<=5;i++)
  {
    for(j=1;j<=i;j++)
    {
        cout<<"*";
    }
    cout<<endl;
  }   

}