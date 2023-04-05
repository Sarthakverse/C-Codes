#include<iostream>
using namespace std;
int main()
{
    /* demonstration of cin.getline(c,50) */
    char c1[50],c2[50];
    cout<<"enter c1: ";
    cin.getline(c1,50);
    cout<<c1;
    cout<<endl<<"enter c2: ";
    cin.getline(c2,50);
    cout<<c2;
    return 0;

}