//Write a C++ program to print all the prime between 1 to 100
#include<iostream>
using namespace std;

class Prime
{
    public:
    void primeprint()
    {
        bool flag;
        for(int i=2;i <=100;i++)
        {
            flag=true;
            for(int j=2;j<= i/2;j++)
            {
                if(i%j==0)
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
            {
                cout<<i<<"is prime"<<endl;
            }
        }
    }
}p;
int main()
{
    p.primeprint();
    cout<<"\n";
    return 0;
}