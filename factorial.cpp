//using recurssion we find factorial here
#include<iostream>
using namespace std;
int factorial(int);
int main()
{
   int n;
   cout<<"enter n:";
   cin>>n;
   cout<<"factorial of "<<n<<" is";
   factorial(n);
   cout<<factorial(n);
   return 0;
}
int factorial(int n){
    if(n==1||n==0)
    return n;
    else
     return n*factorial(n-1);

}