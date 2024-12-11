// 9. Write a C++ program to input a age from user, If age is greater than 18
// then eligible for licence otherwise raise an exception and provide a
// appropriate message.
#include<iostream>
#include<exception>
using namespace std;

class age{
    public:

    int display(int age){
        try{
            if(age<18)
            {
                throw 0;
            }
            cout<<"\n you are eligible";
        }catch(int e)
        {
            cout<<"\n you are not eligible";
        }
    }
}d;
int main()
{
    int age;
    cout<<"\n enter the age:";
    cin>>age;

    d.display(age);
}