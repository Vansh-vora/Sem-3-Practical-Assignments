//Write program for swapping two values of different data type with use of function template.
#include<iostream>
using namespace std;

template <typename T1, typename T2> void swap(T1 &a, T2 &b)
{
    auto temp=a;
    a=static_cast<T1>(b);
    b=static_cast<T2>(temp);

    cout<<"\n Swapping Done";
}
int main()
{
    int a=10,b=20;
    cout<<"\n Before Swapping:"<<a<<" "<<b;
    swap(a,b);
    cout<<"\n After Swapping:"<<a<<" "<<b;

    float x=10.5,y=11.24;
    cout<<"\n BEfore Swapping:"<<x<<" "<<y;
    swap(x,y);
    cout<<"\n After Swapping:"<<x<<" "<<y;

    cout<<"\n";
    return 0;
}