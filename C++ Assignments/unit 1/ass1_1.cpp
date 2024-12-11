//Write a C++ program to use arithmetic operators like +,-,/, %
#include <iostream>
using namespace std;

class Arithmetic
{
    public:

    int uservalue()
    {
        int a;

        cout<<"\n enter a number:";
        cin>>a;
       return a;
       
    }
    
}ar;
int main()
{
    int a=ar.uservalue();
    int b=ar.uservalue();
    char option;

    cout<<"\n Select an Opration:";
    cout<<"\n 1.Addition";
    cout<<"\n 2.Subtraction";
    cout<<"\n 3.Multiplication";
    cout<<"\n 4.Division";

    cout<<"\n Enter a option(+,-,*,/):";
    cin>>option;

    switch (option)
    {
    case '1':
        cout<<"\n Addition of "<<a<<"+"<<b<<"="<<a+b;
        break;
    case '2':
         cout<<"\n Subtraction of "<<a<<"-"<<b<<"="<<a-b;
         break;
    case '3':
         cout<<"\n Multiplication of "<<a<<"*"<<b<<"="<<a*b;
         break;
    case '4':
         cout<<"\n Division of "<<a<<"/"<<b<<"="<<a/b;
         break;

    
    default:
        break;
    }
    cout<<"\n";
    return 0;
}