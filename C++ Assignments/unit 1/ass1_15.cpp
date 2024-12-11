//Write a C++ Program to print multiplication table
#include<iostream>
using namespace std;

class Multiplication{
    public:
    int uservalue()
    {
        int a;
        cout<<"\n enter a number to get its table:";
        cin>>a;
        return a;
    }
    int multiply(int a)
    {
        for(int i=1;i<=10;i++)
        {
            cout<<"\n"<<a<< "X"<<i<<"="<<a*i;
        }
    }
}mul;

int main()
{
    int a=mul.uservalue();
    mul.multiply(a);
    cout<<"\n";
    return 0;
}