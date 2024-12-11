//Write a C++ Program to to add two numbers with use of template function
#include<iostream>
using namespace std;

template <typename T> T sum(T a,T b)
{
    return a+b;
}
int main()
{
    cout<<"Sum:"<<sum(5,10);
    cout<<"\n";
    cout<<"\n Sum of :"<<sum(10.68,5.68);
    cout<<"\n";
    return 0;
}