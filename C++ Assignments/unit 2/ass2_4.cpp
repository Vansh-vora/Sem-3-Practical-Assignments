// write a c++ program that declares and calls the function to perform various mathematical 
// functions(Add, Subtract, Multiply, divide)

#include<iostream>
using namespace std;

class Airth{
    public:
    int uservalue()
    {
        int a,b;
        cout<<"\n enter no1:";
        cin>>a;
        cout<<"\n enter no2:";
        cin>>b;
    }
    int add(int a,int b){return a + b;}
    int sub(int a,int b){return a - b;}
    int mul(int a,int b){return a * b;}
    int div(int a,int b){return a / b;}
}an;

int main()
{
    int a,b,n;
    cout<<"\n The OPeration you want to run---->";
    cout<<"\n 1. Addition";
    cout<<"\n 2.Subtration";
    cout<<"\n3.Multiplication";
    cout<<"\n 4.Division";

    cout<<"\n Enter the selection:";
    cin>>n;
    switch (n)
    {
        case 1:
         a=an.uservalue();
         b=an.uservalue();
        cout<<"\n Addition is:"<< an.add(a,b);
        break;

        case 2:
         a=an.uservalue();
         b=an.uservalue();
        cout<<"\n Subtraction is:"<< an.sub(a,b);
        break;

        case 3:
         a=an.uservalue();
         b=an.uservalue();
        cout<<"\n Multiplication is:"<< an.mul(a,b);
        break;

        case 4:
         a=an.uservalue();
         b=an.uservalue();
        cout<<"\n Division is:"<< an.div(a,b);
        break;
    }
    cout<<"\n\n";
    return 0;
}