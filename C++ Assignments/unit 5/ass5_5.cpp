// 5. Write a C++ program to perform arithmetic operations on two numbers and
// throw an exception if the dividend is zero or does not contain an operator.
#include<iostream>
#include<exception>
using namespace std;

int main()
{
    int a,b;
    cout<<"\n enter 1 number:";
    cin>>a;
    cout<<"\n enter 2 number:";
    cin>>b;

    try{
        if(a==0 && b==0)
        {
            throw 0;
           
        }
         cout<<"\n the result of the operation is:"<< a / b;
    }catch(int e)
    {
        if(e==0)
        {
            cout<<"\n enter a valid number not ->"<<e;

        }
    }
    cout<<"\n";
    return 0;
}