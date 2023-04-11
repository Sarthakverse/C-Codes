#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cout<<"enter n and k : ";
    cin>>n>>k;
    int arr[n],temp[k];
    for(int i=0;i<n;i++)
    {
        cout<<"enter "<<i<<"th element : ";
        cin>>arr[i];
    }
    cout<<endl;
        k = k % n;
        if (k < 0) 
        {
                k += n;
        }
	   
	   for(int i=0;i<k;i++)
	   {
	      temp[i]=arr[i]; 
	   }
	   int j=0;
	   for(int i=k;i<n;i++){
	       arr[j]=arr[i];
	       j++;
	   }
	   int l=0;
	   for(int i=5;i<n,l<k;i++)
	   {
         
              arr[i]=temp[l];
	          l++;
       
	       
	   }
       cout<<"after rotation the array is: "<<endl;
       for(int i=0;i<n;i++)
       {
        cout<<arr[i]<<" ";
       }
       return 0;
	   
}