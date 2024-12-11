//1. Write a c++ Program to illustrate the traversal of an 1D Array.
#include<iostream>
using namespace std;

class Array{
    public:
    int uservalue()
    {
        int size;
        cout<<"\n enter the size of array:";
        cin>>size;
        return size;
    }
}a;
int main()
{
    int size=a.uservalue();
    int array[size];
    for(int i=0;i<size;i++)
    {
        cout<<"\n enter the element"<<i+1<<":";
        cin>>array[i];
    }
    cout<<"\n the elements of array are:";
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<"\n";
    return 0;
}