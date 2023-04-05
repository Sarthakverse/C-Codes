#include<iostream>
using namespace std;
int main()
{
    int mid = 4;
    int left=mid;
    int right=mid;
    int count=1;
    for(int i=0;i<=4;i++)
    {
        int newvalue=count;
        for(int j=0;j<9;j++)
        {
            if(j>=left && j<=right){
                if(j>=mid){
                    cout<<newvalue--<<" ";
                }else{
                    cout<<newvalue++<<" ";
                }
            }
            else{
                cout<<"  ";
            }
        }
        left = left-1;
        right= right+1;
        count=count+1;
        cout<<endl;
    }
    return 0;
}
