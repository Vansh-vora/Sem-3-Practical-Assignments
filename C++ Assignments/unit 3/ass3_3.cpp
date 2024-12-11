//3. Write a C++ Program to illustrate the Traversal of a string.
#include<iostream>
#include<string>
using namespace std;

class str{
    public:
    string st;
    void userstring()
    {
        cout<<"\n enter a string:";
        cin>>st;
        cout<<"\n the string is:"<<st;
    }
}s;
int main()
{
    s.userstring();
    cout<<"\n the string is:"<<s.st;
    for(int i=0;i<s.st.length();i++)
    {
        cout<<"\n the character at position"<<i<<"index is:"<<s.st[i];
    }
    cout<<"\n";
    return 0;
}