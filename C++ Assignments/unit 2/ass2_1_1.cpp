//write a c+ program to calculate factorial numbers using Recursion
#include<iostream>
using namespace std;

class Factorial{
    public:
    int fact(int n)
    {
        if(n<=1)
        {
            return 1;
        }
        else
        {
            return n*fact(n-1);
        }
    }
}f;

int main()
{
    int n;

    cout<<"\n Enter the number of factorial:";
    cin>>n;

    cout<<"\n The factorial is:"<<f.fact(n);
    cout<<"\n";
    return 0;
}