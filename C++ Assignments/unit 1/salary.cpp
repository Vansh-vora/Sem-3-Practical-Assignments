#include<iostream>
using namespace std;

class Salary{
    public:

    void SalCal(float sal){
        float it,netsal;
        cout<<"\n Your basic Salary is :"<<sal;
        cout<<"\nEnter income tax in percentage:";
        cin>>it;
        netsal= sal - sal * it /100;
        cout<<"\n Your net salary after tax ded:"<<netsal;

    }
}sala;

int main(){

    int sal;
    cout<<"\n enter your basic salary:";
    cin>>sal;

    sala.SalCal(sal);

    cout<<"\n\n";
    return 0;
}