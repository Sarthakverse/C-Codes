//fibonacci using recurssion
#include<iostream>
int n;
int fibonacci(int);
using namespace std;
int main()
{
    
    cout<<"type number upto which you want the fibonacci to be printed:";
    cin>>n;
    for(int i = 0; i < n; i++) {
      cout<<fibonacci(i)<<" ";
   }

    
    return 0;
}
int fibonacci(int n)
{
    if(n<=1)
    return n;
    return fibonacci(n-1)+fibonacci(n-2);

}