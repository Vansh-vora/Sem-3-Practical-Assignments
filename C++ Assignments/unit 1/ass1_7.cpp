//Write a C++ program to check whether the integer entered by user is positive, negative or 
//zero using nested if-else.
#include<iostream>
using namespace std; 

class Integer
{
    public:
    int a;
}ii;
int main()
{
    int a;
    cout<<"\n enter an integer to check:";
    cin>>ii.a;

    if(ii.a>0)
    {
        cout<<"\n it is a positive integer";
    }
    else{
        if(ii.a<0)
        {
            cout<<"\n it is a negative integer";
        }
        else
        {
            cout<<"\n it is a zero";
        }
    }
    cout<<"\n";
    return 0;
}