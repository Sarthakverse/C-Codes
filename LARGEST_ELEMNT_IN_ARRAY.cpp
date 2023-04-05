#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array:"<<endl;
    cin>>n;
    int array[n];
    cout<<"enter array elements one by one:"<<endl;
    for(int x=0;x<n;x++)
    {
       cout<<"enter "<<x<<" index element: ";
       cin>>array[x];
    }
    cout<<"array you have constructed is:-"<<endl;
    for(int x=0;x<n;x++)
    {
        cout<<array[x]<<" ";
    }
    int largest=array[0];
    for(int x=0;x<n;x++)
    {
        if(largest>=array[x])
        {
            continue;
        }
        else
        largest=array[x];
    }
    cout<<"largest element in the array is:"<<endl;
    cout<<largest;
    return 0;
}