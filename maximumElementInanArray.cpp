#include<iostream>
using namespace std;
int main()
{
    int i,j,temp,A[10];
    for(i=0;i<10;i++){
        cout<<"enter "<<i<<"th element-->";
        cin>>A[i];
     }
    for(i=0;i<10;i++)
    {
       for(j=i+1;j<10;j++)
       {
            if(A[i]<A[j])
            continue;
          else
          {
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
            continue;
          }
       }
    }
    cout<<"soretd array in ascending order will be:"<<endl;
    for(i=0;i<10;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl<<"greatest element in array A is: "<<A[j];
    return 0;
}