//Write a C++ Program to create a menu driven program for to perform the following 
//operations 
//1. Sum of Digit
//2. Armstrong or Not
//3. Palindrome or Not
//4. Multiplication of Digit

#include<iostream>
using namespace std;

class Operation{
    public:
    
    int uservalue()
    {
        int a;
        cout<<"\n enter a number:";
        cin>>a;
        return a;
    }
    void sum()
    {
        int a=uservalue();
        int b=uservalue();
        cout<<"\nThe sum of"<<a<< "and"<<b<<"is:"<<a+b;
    }
    void armstrong()
    {
        int n=uservalue();
        int rem=0,sum=0;
        for(int i=n;i != 0;i /= 10)
        {
            rem=i % 10;
            sum+=rem*rem*rem;
        }
        if(sum==n)
        {
            cout<<"\nThe number is armstrong number";
        }
        else{
            cout<<"\n the number is not armstrong number";
        }
    }
    void palindrome()
    {
        int n=uservalue();
        int rem=0,revnum=0;
        for(int i=n; i != 0; i /=10)
        {
            rem=i % 10;
            revnum= revnum *10 +rem;
        }
        if(n==revnum)
        {
            cout<<"\n The number is palindrome number";
        }
        else
        {
            cout<<"\n the number is not a palindrome number";
        }

    }
    void mult()
    {
        int a=uservalue();
        int b=uservalue();
        cout<<"\n The multiplication of"<<a<<"and"<<b<<"is:"<<a*b;
    }
}op;

int main()
{
    int opr;
    cout<<"\n enter the op";
    cout<<"\n1. Sum of Digit";
    cout<<"\n2. Armstrong or Not";
    cout<<"\n3. Palindrome or Not";
    cout<<"\n4. Multiplication of Digit";
    cout<<"\n enter a number of choice:";
    cin>>opr;

    switch(opr)
    {
        case 1:
        {
            op.sum();
            break;
        }
        case 2:
        {
            op.armstrong();
            break;
        }
        case 3:
        {
            op.palindrome();
            break;
        }
        case 4:
        {
            op.mult();
            break;
        }
    }
    cout<<"\n";
    return 0;
}