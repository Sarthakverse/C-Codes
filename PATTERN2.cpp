/*12345
  1234
  123
  12
  1    */
#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<7-i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}