//4. Write a C++ Program to enter salary and output income tax and net salary.
#include<iostream>
using namespace std;

class Salary{
    public:
    void Salarycal(float sal)
    {
        float it,netsal;
        cout<<"\n Your basic Salary is:"<<sal;
        cout<<"\n enter income tax in percentage:";
        cin>>it;
        netsal= sal + sal * it / 100;
        cout<<"\n Net Salary is:"<<netsal;
    }
}s;

int main()
{
    int sal;
    cout<<"\n enter you salary:";
    cin>>sal;

    s.Salarycal(sal);

    cout<<"\n";
    return 0;
}