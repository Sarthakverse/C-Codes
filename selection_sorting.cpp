//  THIS IS NOT STANDARD METHOD;
//selection sort is techniqque of sorting array in ascending order
//methodology --> get the minimum and swap 
#include<iostream>
using namespace std;
int min_element(int);
int k;
int arr[6]={13,46,24,52,20,9};
int main()
{
    int j=1;
    static int n=0;
    while(j<7)
    {
         
        min_element(n);//i have used recurssion here;
         n++;
          j++;
    }
    return 0;
}
int min_element(int n){
    int min=arr[n];
    int i;
    for(i=n;i<=5;i++)
    {
       if(arr[i]<min)
       {
        int temp=min;
        min=arr[i];
        arr[i]=temp;
       }
    }
     cout<<min<<" ";
     
}
