#include<iostream>
using namespace std;
int main()
{
    int n,temp=0,vari=0;
    cout<<"enter n: ";
    cin>>n;
  
    while(n!=0){
        int y=n%2;
        temp=(temp*10)+y;
        n=n/2;
    }
    //cout<<"temp is:"<<temp<<endl;
    while(temp!=0){
        int o=temp%10;
        cout<<o;
        temp=temp/10;
    }
    
    return 0;
}