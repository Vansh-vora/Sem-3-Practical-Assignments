// Write a program to take a two values from user and illustrate Division by Zero Exception
#include<iostream>
#include<exception>
using namespace std;

int main()
{
    int a,b;

    cout<<"\n enter a dividend:";
    cin>>a;
    cout<<"\n enter a divisior:";
    cin>>b;

    try{
        if(b==0)
        {
            throw 0;
           
        }
         cout<<"\n Division of "<<a<<"/"<<b<<"="<<a/b;
    } catch(int e)
    {
        cout<<"\n enter a valid:";
    }
    cout<<"\n";
    return 0;
}