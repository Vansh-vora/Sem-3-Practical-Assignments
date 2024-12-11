//Write a C++ program that will ask user to input two numbers and check whether values are 
//equal or not using assignment operator
#include<iostream>
using namespace std;

class checknum{
    public:
    void num2(int a,int b)
    {
        if(a==b)
        {
            cout<<"\n both number are equal";
        }
        else
        {
            cout<<"\n Both are not eqaul";
        }
    }
}c;
int main()
{
    int a,b;

    cout<<"\n enter 1 number:";
    cin>>a;
    cout<<"\n enter 2 number:";
    cin>>b;

    c.num2(a,b);
    cout<<"\n";
    return 0;
}