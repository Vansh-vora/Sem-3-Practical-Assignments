// Write a c++ Program to swap two numbers using Function.
#include<iostream>
using namespace std;

class swap
{
    public:
    void Swap(int a,int b)
    {
        a=a+b;
        b=a-b;
        a=a-b;

        cout<<"\n the value of a:"<<a;
        cout<<"\n the value of b:"<<b;
    }
}ss;
int main()
{
    int a,b;
    cout<<"\n enter a:";
    cin>>a;2
    
    cout<<"\n enter b:";
    cin>>b;

    cout<<"\n Bofore";
    cout<<"\n After";
    ss.Swap(a,b);
    cout<<"\n After:"<<a;
    cout<<"\n After:"<<b;

    cout<<"\n";
    return 0;
}