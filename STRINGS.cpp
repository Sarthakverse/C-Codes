/*here i will demonstrate the use of 
cin.get(c,50) vs cin.getline(c,50) */
#include<iostream>
using namespace std;
int main()
{
    char s1[50],s2[50];         
    cout<<"Enter string S1:";
    cin.get(s1,50);
    cout<<"welcome "<<s1<<endl;
    //use cin.ignore();
    //cin.ignore();
    cout<<"Enter string s2:";
    cin.get(s2,50);
    cout<<"welcome "<<s2<<endl;
    return 0;
}
/* O/P:-
    Enter string S1:sarthak rastogi
    welcome sarthak rastogi
    Enter string s2:welcome        */
/*to correct this problem use 
          cin.ignore()             */
