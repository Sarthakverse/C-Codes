#include<bits/stdc++.h>
using namespace std;
int n;
int insertion_sort(int arr[],int n){
        for (int i = 0; i < n; i++)
        {
            int j=i;
           while (j>0 && arr[j-1]>arr[j])
           {
               int temp=arr[j-1];
               arr[j-1]=arr[j];
               arr[j]=temp;
               j--;
           }
        }
        cout<<endl<<"array after sorting is: "<<endl;
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        
        
}
int main()
{
   int n;
   cout<<"enter n:";
   cin>>n;
   int arr[n];
   for (int i = 0; i < n; i++)
   {
       cout<<"enter "<<i<<"th element : ";
       cin>>arr[i];
   }
   cout<<"the array u have eneterd is:"<<endl;
   for (int i = 0; i < n; i++)
   {
       cout<<arr[i]<<" ";
   }
   //calling function for insertion sort
   
   insertion_sort(arr,n);
   return 0;

   
}