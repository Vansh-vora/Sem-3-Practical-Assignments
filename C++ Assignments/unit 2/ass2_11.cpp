//  Write a Program with function to Check Whether a Number Is a Palindrome or Not

#include<iostream>
using namespace std;

class Palindrome{
    public:

    bool Palindrome(int n)
    {
       int rem=0,rev;
       for(int i=n;i!=0;i/=10)
       {
        rem=i % 10;
        rev=rev * 10 +rem;
       }
       if(n==rev)
       {
        return true;
       }
       else
       {
        return false;
       }
    }
}pl;

int main()
{
    int a;

    cout<<"\n Enter the number to check Palindrome or not:";
    cin>>a;

    if(pl.Palindrome(a))
    {
        cout<<"\n The Number is Plaindrome";
    }
    else{
        cout<<"\n The Number is Not Plaindrome";
    }

    cout<<"\n\n";
    return 0;
}