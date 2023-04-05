#include<iostream>
// we are not "using namespace std;" this time
int main()
{
    std::string name;
    std::cout<<"may i know your name :";
    getline(std::cin,name);
    std::cout<<"welcome Mr "<<name;
    return 0;

}