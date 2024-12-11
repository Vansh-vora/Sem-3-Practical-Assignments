 //Write a C++ Program to print following pyramid
//*
//**
//***
//****
//*****
#include<iostream>
using namespace std;

class pyramid
{
    public:
    int uservalue()
    {
        int a;
        cout<<"\n enter a number of rows:";
        cin>>a;
        return a;
    }
    void pattern(int a)
    {
        for(int i=0;i<=a;i++)
        {
            for(int j=0;j<i;j++)
            {
                cout<<"* ";
            }
            cout<<"\n";
        }
    }
}py;
int main()
{
    int a=py.uservalue();
    py.pattern(a);

    cout<<"\n";
    return 0;
}