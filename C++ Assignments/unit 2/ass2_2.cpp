// write a c++ program to check prime number using Function
#include<iostream>
using namespace std;

class Prime
{
    public:
    bool prime(int n)
    {
        for(int i=2;i<=n/2;i++)
        {
            if(n % i == 0)
            {
                return false;
            }
            else
            {
                return true;
            }
        }
    }
}p;

int main()
{
    int n;
    cout<<"\n enter a number:";
    cin>>n;

    if(p.prime(n))
    {
        cout<<"\n the number is Prime Number";
    }
    else
    {
        cout<<"\n the number is not a Prime Number";
    }
    cout<<"\n\n";
    return 0;
}