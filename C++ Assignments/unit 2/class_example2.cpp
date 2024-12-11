#include<iostream>
using namespace std;

class FirstClass
{
    public:
    int a,b;
};

int main()
{
    FirstClass obj;
    obj.a=25;
    obj.b=35;

    cout<<"\n A="<<obj.a;
    cout<<"\n B="<<obj.b;

    cout<<"\n\n";
    return 0;
}