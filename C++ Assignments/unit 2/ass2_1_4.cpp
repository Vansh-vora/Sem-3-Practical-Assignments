// write a c++ program that declares and calls the function to perform various mathematical 
// functions(Add, Subtract, Multiply, divide)
#include<iostream>
using namespace std;

class Arith
{
    public:
    int uservalue()
    {
        int a;
        cout<<"\n enter no1:";
        cin>>a;
        return a;
    }
    int userValue()
    {
        int b;
        cout<<"\n enter no2:";
        cin>>b;
        return b;

    }
    int add(int a,int b){return a+b;}
    int sub(int a,int b){return a-b;}
    int mul(int a,int b){return a*b;}
    int div(int a,int b){return a/b;}
}an;

int main()
{
    int a,b,n;
    cout<<"\n which op you want to perform";
    cout<<"\n 1.Add";
    cout<<"\n2.Sub";
    cout<<"\n3.MUl";
    cout<<"\n4.Div";

    cout<<"\n Enter your selection:";
    cin>>n;

    switch (n)
    {
    case 1:
        a=an.uservalue();
        b=an.userValue();
        cout<<"\n Addition is:"<< an.add(a,b);
        break;
    case 2:
        a=an.uservalue();
        b=an.uservalue();
        cout<<"\n Subtration is:"<<an.sub(a,b);
        break;
    case 3:
        a=an.uservalue();
        b=an.uservalue();
        cout<<"\n Multiplication is:"<<an.mul(a,b);
        break;
    case 4:
        a=an.uservalue();
        b=an.uservalue();
        cout<<"\n Division is:"<<an.div(a,b);
        break;
    default:
        break;

    }
    cout<<"\n";
    return 0;
}