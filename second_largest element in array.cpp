// second largest element in array
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter "<<i<<"th element : ";
        cin>>arr[i];
    }
    cout<<endl;
   for(int i=0;i<1;i++)
	    {
	        for(int j=1;j<n;j++)
	        {
	            if(arr[0]==arr[j])
	            continue;
	            else
	            goto label;
	        }
	        return -1;
	    }
	    label:static int max=0;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>max)
	        max=arr[i];
	   }
	   static int max_2=0;
	   for(int i=0;i<n;i++)
	   {
	       if(arr[i]<max && arr[i]>max_2)
	       {
	           max_2=arr[i];
	       }
	       
	   }
	   cout<<"2nd max is "<<max_2;
	   return 0;
}