//String Append
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1,str2;
    cout<<"\n Enter 1 String:";
    cin>>str1;
    cout<<"\n Entered 1 String is:"<<str1;

    cout<<"\n Enter 2 String:";
    cin>>str2;
    cout<<"\n Entered 2 String is:"<<str2;

    str1.append(str2);
    cout<<"\nAfter Appending:"<<str1;
    return 0;
}