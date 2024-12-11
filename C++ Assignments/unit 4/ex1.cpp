#include<iostream>
using namespace std;
//same datatype int then take only one class
//if different datatype then take more than one class
template<class X,class Y> void fun(X a,X b,Y c)
{
    cout<<"\nvalue of a"<<a;
    cout<<"\nvalue of b"<<b;
    cout<<"\nvalue of c:"<<c;
}
int main()
{
    fun(10,20,5.5);
    return 0;
}