//  Write a C++ program to demonstrate the use of default arguments in function overloading
#include<iostream>
using namespace std;

class Default
{
    public:
    int sum (int a,int b,int c=0)
    {
        return a+b+c;
    }
}def;
int main()
{
    int a,b,c;
    cout<<"\n enter no1:";
    cin>>a;
    cout<<"\n enter no2:";
    cin>>b;
    cout<<"\n enter no3:";
    cin>>c;

    cout<<"\n Sum of a and b:"<<def.sum(a,b);
    cout<<"\n Sum of a,b and c:"<<def.sum(a,b,c);
    cout<<"\n";
    return 0;
}