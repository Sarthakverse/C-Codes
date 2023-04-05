#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter n:";
    cin>>n;
   /* for(i=1;i<=10;i++)
    {
        int y=n*i;
        cout<<n<<"*"<<i<<"="<<y<<endl;

    }
    return 0;*/
   /* i=1;
    while(i<=10)
    {
        int y=n*i;
         cout<<n<<"*"<<i<<"="<<y<<endl;
        i++;
       
    }
    return 0;*/
    int y;
    i=1;
    do{
        y=n*i;
      cout<<n<<"*"<<i<<"="<<y<<endl;
      i++;
    }while(i<=10);

}