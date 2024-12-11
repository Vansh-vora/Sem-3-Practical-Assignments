//String Swapping
#include<iostream>
using namespace std;
int main()
{
    string s1,s2;
    char d[20];
    cout<<"\n Enter 1 String :";
    getline(cin,s1);

    cout<<"\n Enter 2 String:";
    getline(cin,s2);

    cout<<"\nBefore Swapping";
    cout<<"\n1 String:"<<s1;
    cout<<"\n2 String:"<<s2;
    s1.swap(s2);

    cout<<"\nAfter Swapping";
    cout<<"\n1 String:"<<s1;
    cout<<"\n2 String:"<<s2;

    return 0;
}