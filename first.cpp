#include<iostream>
using namespace std;
int main()
{
string name;
cout<<"may i know your name:";
//cin>>name; sarthak rastogi....only sarthak gets printed
getline(cin,name);// use getline(cin,name);for printing full name
cout<<"welcome Mr "<<name;
return 0;
}