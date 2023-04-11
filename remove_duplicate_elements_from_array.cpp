// if array[10]= {3 1 3 8 8 2 4 6 6 8}
// then new array after removing duplicate elements will be array[8]={3 1 3 8 2 4 6 8}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter n:";
    cin>>n;
    int array[n];
    //taking array input from user
    for (int i = 0; i < n; i++)
    {
        cout<<"enter the "<<i<<"th element : ";
        cin>>array[i];
    }
    // displaying the array inputed by user
    cout<<"the array u have entered is:  "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
    //now applying algorithm
    static int j=0;
    for (int i = 1; i < n; i++)
    {
        if(array[i]!=array[j])
        {
            j++;
            array[j]=array[i];
        }
        else
        continue;
    }
    //since the duplicated nos have been removed, time to print new array...
    cout<<endl;
    for (int i = 0; i < j+1; i++)
    {
        cout<<array[i]<<" ";
    }
    
    return 0;
    
}
