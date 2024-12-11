// 7.
// Write a C++ program to take a account no, balance and withdraw amount. If
// amount is less than balance then raise an exception. Note : If exception is
// raised, user need to enter withdraw amount again till the exception resolves.
#include<iostream>
#include<exception>
using namespace std;

int main()
{
    int accno;
    int balance;
    int withdrawamt;

    cout<<"\n enter your acc no:";
    cin>>accno;
    cout<<"\n enter the balance:";
    cin>>balance;
    
    while(true)
    {
        try{
            cout<<"\n enter the withdraw amt:";
            cin>>withdrawamt;

            if(withdrawamt>balance)
            {
                throw 0;
            }
            cout<<"\n Withdrawn is valid:";
            break;
        }catch(int e){
            cout<<"\n enter the valid withdraw amt";
        }
    }
    cout<<"\n";
    return 0;
}