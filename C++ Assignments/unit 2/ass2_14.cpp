//  Write a C++ Program to generate a simple calculator using constructor

#include<iostream>
using namespace std;

class Cal{
    public:
    Calculator (int a,int b,char opr)
    {
        switch (opr)
        {
            case '+':
            cout<<"\n Addition is:"<<(a + b);
            break;

            case '-':
            cout<<"\n Subtraction is:"<<(a - b);
        }
    }
}ca;

int main()
{
    int a,b;
    char opr;

    cout<<"\n enter first number:";
    cin>>a;
    cout<<"\n Enter second number:";
    cin>>b;

    cout<<"\n Enter the Operation You want to Perform(+,-)";
    cin>>opr;

    ca.Calculator (a,b,opr);

    cout<<"\n\n";
    return 0;
}