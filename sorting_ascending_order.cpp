//sorting array in ascending order
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[6]={3,1,8,2,4,6};
    for(int i=0;i<6;i++)
        {
          for(int j=i+1;j<6;j++)
          {
              if(a[i]>a[j])
              {
                  int temp=a[i];
                  a[i]=a[j];
                  a[j]=temp;
              }
              else
              continue;
          }
        }
        for(int i=0;i<6;i++)
        {
            cout<<a[i];
        }
        return 0;
}