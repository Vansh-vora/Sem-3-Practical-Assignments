// Write a c++ Program to swap two numbers using Function.

#include<iostream>
using namespace std;

class swap{
    public:
    void Swap(int a,int b)
    {
        a=a + b;
        b=a - b;
        a=a - b;

        cout<<"\n The value of a:"<<a;
        cout<<"\n the value of b:"<<b;
    }
}ss;
int main ()
{
    int a,b;
    cout <<"\n Enter a:";
    cin>>a;
    cout<<"\n Enter b:";
    cin>>b;

    cout<<"\n Before Swapping:"<<a;
    cout<<"\n After swapping:"<<b;

    ss.Swap(a,b);

    cout<<"\n After Swapping:"<<a;
    cout<<"\n After Swapping:"<<b;

    cout<<"\n\n";
    return 0;
}