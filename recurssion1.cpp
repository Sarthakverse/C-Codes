//print n to 1 using recurrsion
#include<iostream>
using namespace std;
int numbers(int n){
    if(n==0)
    
    return 0;

    cout<<n;
    
    n=n-1;
    numbers(n);// example of recurssion.

}
int main()
{
  int n;
  cout<<"enter n:";
  cin>>n;
  numbers(n);
  return 0;
}