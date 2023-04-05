/* program to demonstarte binary search*/
#include<iostream>
using namespace std;
int main()
{
    int key,mid,low,high,arr[10]={6,2,13,17,20,22,25,28,30,35};
    low=0;
    high=9;
    key=25;
   
    while(low<=high)/*if low>high then element not found */
    {
         mid=(low+high)/2;
        if(key==arr[mid])
      {
        cout<<"found at index"<<mid;
        return 0;
      }
       else if (key<arr[mid])
      {
        high=mid--;
      }
        else
      {
        low=mid++;
      }
    }
    cout<<"elemnt not found";
    return 0;
    
}