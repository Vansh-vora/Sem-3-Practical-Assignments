//Write a C++ program to check minimum and maximum of two numbers using Ternary 
//operator
#include<iostream>
using namespace std;

class Ternary
{
    public:
    int a,b;

}t;

int main()
{
    cout<<"\n enter first number:";
    cin>>t.a;
    cout<<"\n enter second number:";
    cin>>t.b;

    int max= (t.a>t.b)? t.a : t.b;
    int min= (t.a<t.b)? t.a : t.b;
    cout<<"\n Max is:"<<max;
    cout<<"\n Min is:"<<min;

    cout<<"\n";
    return 0;
}