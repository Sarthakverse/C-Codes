#include<iostream>
using namespace std;
int main()
{
    int k=6,array[10]={1,2,3,4,5,6,78,9,0,1};
    //to find loaction of '6' element
    for(int i=0;i<=9;i++)
    {
       if(array[i]==k)
       {
        cout<<"element found at index "<<i<<endl;
        break;
       }
       else
       {
        cout<<"element not found at index "<<i<<endl;
        continue;
        
       }
    }
    return 0;
}