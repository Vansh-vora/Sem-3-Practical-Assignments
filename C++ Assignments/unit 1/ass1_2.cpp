//Write a C++ program to swap the values of two integers. 
#include<iostream>
using namespace std;

class Swap{
    public:

    int uservalue()
    {
        int a;
        cout<<"\n enter a number:";
        cin>>a;
        return a;
    }

    void swap(int a,int b)
    {
        a=a+b;
        b=a-b;
        a=a-b;

        cout<<"\n the value of a="<<a;
        cout<<"\n the value of b="<<b;
    }

}s;

int main()
{
    int a=s.uservalue();
    int b=s.uservalue();

    cout<<"\n Before\n";
    cout<<"\n value of a:"<<a;
    cout<<"\n value of b:"<<b;

    cout<<"\n After\n";
    s.swap(a,b);

    cout<<"\n";
    return 0;
}