//  Write a c++ Program to demonstrate the use of Friend class to access the member of one 
// class.
#include<iostream>
using namespace std;

class Demo
{
    private:
    int a;

    public:
    void setdata(int a)
    {
        this->a=a;
    }
    friend void showdata(Demo &d);
}de;
void showdata(Demo &d)
{
    cout<<"\n VAlue:"<<d.a;
}
int main()
{
    int a;
    cout<<"\n enter a number:";
    cin>>a;

    de.setdata(a);

    showdata(de);
    cout<<"\n";
    return 0;
}