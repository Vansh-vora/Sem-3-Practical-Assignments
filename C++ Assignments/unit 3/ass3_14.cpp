//Write a C++ Program by entering a string a string anf find out the capacity of the string
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
    void capacity()
    {
        cout<<"\n the capacity of name is:"<<name.capacity();
    }
}s;
int main()
{
    s.uservalue();
    s.display();
    s.capacity();
    cout<<"\n";
    return 0;
}