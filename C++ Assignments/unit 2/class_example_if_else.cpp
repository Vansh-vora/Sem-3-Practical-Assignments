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

    cout<<"\n enter value of a=";
    cin>>obj.a;

    cout<<"\n enter value of b=";
    cin>>obj.b;

    if(obj.a>obj.b)
    {
        cout<<"\n A is bigger";
    }
    else
    {
        cout<<"\n B is Bigger";
    }
    cout<<"\n\n";
    return 0;
}