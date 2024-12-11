//17. Write a C++ Program to enter two strings from user and Swap those string using function
#include<iostream>
#include<string>
using namespace std;

void swapstr(string &str1,string &str2)
{
    string temp=str1;
    str1=str2;
    str2=temp;
}
int main()
{
    string str1,str2;
    cout<<"\n enter string 1:";
    getline(cin,str1);
    cout<<"\n enter string 2:";
    getline(cin,str2);

    str1.swap(str2);
    cout<<"\n the first string is:"<<str1;
    cout<<"\n the second string is:"<<str2;

    cout<<"\n";
    return 0;
}