//max elements are send to there respective last positions
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter n:";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"enter "<<i<<"th element ";
        cin>>arr[i];
    }
    //printing array
    cout<<"the array user has entered is: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
   //implementing bubble sorting now
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])  swap(arr[j],arr[j+1]);
            else continue;
        }
    }
    //now print sorted array
    cout<<"sorted array using bubble sort is: "<< endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;  
}
