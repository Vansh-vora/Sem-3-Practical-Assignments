#include<iostream>
using namespace std;

class swa{
    public:
        int a,b;

       int swap(int a,int b)
    {
        cout<<"\n before swap:"<<a<<"\n"<<b;
        a=a+b;
        b=a-b;
        a=a-b;
        cout<<"\n after swap:"<<a<<"\n"<<b;
    }
}s;

int main()
{
    int a,b;
    cout<<"\n enter number 1:";
    cin>>s.a;
    cout<<"\n enter number 2:";
    cin>>s.b;
    s.swap(s.a,s.b);


    cout<<"\n\n";
    return 0;
}