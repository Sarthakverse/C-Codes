#include<iostream>
using namespace std;
int main()
{
    int x,temp=0,y;
    cout<<"enter x:";
    cin>>x;
    y=x;
    while(x!=0)
    {
        int rem=x%10;
        temp=(temp*10)+rem;
        x=x/10;
    }
    cout<<"reverse of the given number is: "<<temp<<endl;
    if(temp==y)
    cout<<"pallindrome";
    else
    cout<<"not palllindrome";
    return 0;


}