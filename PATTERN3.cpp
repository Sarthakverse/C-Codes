/* 1
   12
   1 3
   1  4
   12345 */
#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i==j||j==1||i==5)
            cout<<j;
            else if(j>1&&j<i)
            cout<<" ";
            else
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}