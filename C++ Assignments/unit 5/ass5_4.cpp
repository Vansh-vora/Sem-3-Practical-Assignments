// 4. Write a C++ program which asks the user to input a number which should be
// greater than equal to zero and should be less than to 100, If not raise an
// exception.
#include<iostream>
#include<exception>
using namespace std;

int main()
{
    int n;
     cout << "\n enter a number bet 0-100:";
    cin >> n;

    try{
        if( n<=0 )
        {
            throw 0;
        }
        if(n>=100)
        {
            throw 1;
            cout<<"\n the number is valid";
        }   
    }catch (int e){
         if(e==0)
            {
                cout<<"\n NUmber should be greater than 0";
            }
            else if(e==1)
            {
                cout<<"\n the number should be less than 100";
            }
    }
    cout<<"\n";
    return 0;
}