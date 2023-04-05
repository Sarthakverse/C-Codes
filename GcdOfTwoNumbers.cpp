#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"enter x:";
    cin>>x;
    cout<<"enter y:";
    cin>>y;
    while(x!=y)
    {
      if(x>y)
      {
        x=x-y;
      } 
      else
      {
        y=y-x;
      }
    }
    cout<<y;
}