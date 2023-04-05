#include<iostream>
using namespace std;
int main()
{
    int n,count=0,sum=0;
    cout<<"n? =";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {  
            count=count+1;
            sum=sum+i;
        }
    }
    int y=2*n;
    if(sum==y)
    {
        printf("perfect number");

    }
    else
    printf("not perfect number");

    
}