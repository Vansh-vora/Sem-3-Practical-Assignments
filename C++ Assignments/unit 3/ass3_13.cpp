//13. Write a C++ Program to enter a string from user and find Length of that string
#include<iostream>
#include<string>
using namespace std;

class st{
    public:
    string name;

    void uservalue()
    {
        cout<<"\n enter your name:";
        cin>>name;
        
    }
    void display()
    {
        cout<<"\n Name:"<<name;
    }
    void length()
    {
        cout<<"\n the length of name is:"<<name.length();
    }
}s;
int main()
{
    s.uservalue();
    s.display();
    s.length();
    cout<<"\n";
    return 0;
}