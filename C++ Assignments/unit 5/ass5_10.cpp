// 10. Write a C++ program to create a method that takes an integer as a
// parameter and throws an exception in another function if the number is odd.
#include<iostream>
#include<exception>
using namespace std;

void oddcheck(int n)
{
    try{
        if(n%2==0)
        {
            throw runtime_error("the number is not odd");
        }
        cout<<"\n the numeber is odd";
    }catch (const runtime_error e)
    {
        cout<<"\n"<<e.what();
    }
}
int main()
{
    int x;
    cout<<"\n enter any odd numeber:";
    cin>>x;

    oddcheck(x);

    cout<<"\n";
    return 0;
}