#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int BinaryCode,sum=0,i=0;
    cout<<"BinaryCode is :";
    cin>>BinaryCode;
    while(BinaryCode!=0)
    {
        int temp=BinaryCode%10;
        int sum=sum+(temp*pow(2,i));
        cout<<sum<<endl;
        i++;
        BinaryCode=BinaryCode/10;
    }

    cout<<sum;
    return 0;

}

