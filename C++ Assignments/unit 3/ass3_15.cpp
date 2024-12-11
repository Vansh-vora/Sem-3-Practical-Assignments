//Write a C++ program to resize the string by 10
#include<iostream>
#include<string>
using namespace std;

class st{
    public:
    string name;

    void uservalue()
    {
        cout<<"\n enter the name:";
        cin>>name;

    }
    void display()
    {
        cout<<"\n Name:"<<name;
    }
    void resize()
    {
        cout<<"\n Before Resize:"<<name.size();
        name.resize(name.size()+10);
        cout<<"\n After resize:"<<name.size();
    }
}s;
int main()
{
    s.uservalue();
    s.display();
    s.resize();
    cout<<"\n";
    return 0;
}