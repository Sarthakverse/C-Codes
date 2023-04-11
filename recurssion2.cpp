//print 1 to n using recurssion
#include<iostream>
using namespace std;
int n;
int one_to_n(int k){
    if(k==n+1)
    return 0;
    cout<<k;
    k++;
    one_to_n(k);

}
int main(){
    int k=1;
    cout<<"enter n:";
    cin>>n;
    one_to_n(k);
    return 0;
}