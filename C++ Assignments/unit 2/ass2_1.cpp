//  write a c+ program to calculate factorial numbers using Recursion
#include<iostream>
using namespace std;

class Fact{
    public:
    int fact(int n){
        if(n<=1)
        {
            return 1;
        }
        else{
            return n*fact(n-1);
        }
    }
}f;

int main()
{
    int n;
    cout<<"\n Enter the number to find the factorial:";
    cin >> n;

    cout <<"\n Factorial is"<<f.fact(n);
}