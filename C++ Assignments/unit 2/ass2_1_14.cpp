//4. Write a C++ Program to generate a simple calculator using constructor.
#include<iostream>
using namespace std;

class Cal{
    public:
    Calculator (int a,int b,char opr)
    {
        switch (opr)
        {
            case '+':
            cout<<"\n Addition:"<<a+b;
            break;
            case '-':
            cout<<"\n Sub:"<<a-b;
        }
    }
}ca;
int main()
{
    int a,b;
    char opr;

    cout<<"\n enter no1:";
    cin>>a;
    cout<<"\n enter no2:";
    cin>>b;

    cout<<"\n choice:";
    cin>>opr;

    ca.Calculator(a,b,opr);
    cout<<"\n";
    return 0;
}