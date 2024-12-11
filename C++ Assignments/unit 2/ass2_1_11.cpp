//  Write a Program with function to Check Whether a Number Is a Palindrome or Not
#include<iostream>
using namespace std;

class Palindrome{
    public:

    bool palindrome(int n)
    {
        int rem=0,revNum=0;
        for(int i=n;i !=0;i /=10)
        {
            rem=i%10;
            revNum=revNum*10+rem;
        }
        if(n==revNum)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}p1;
int main()
{
    int a;
    cout<<"\n enter the number:";
    cin>>a;

    if (p1.palindrome(a))
    {
        cout<<"\n Palindrome";
    }
    else{
        cout<<"\n NOt";
    }
    cout<<"\n";
    return 0;
}