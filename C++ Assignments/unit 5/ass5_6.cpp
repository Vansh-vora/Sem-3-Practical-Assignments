// 6. Write a C++ program to accept an email address and throw an exception if
// it does not contain @ symbol.|
#include<iostream>
#include<exception>
using namespace std;

int main()
{
    string mail;
    cout<<"\n enter your mail:";
    getline(cin,mail);

    try{
        if(mail.find('@')== string::npos)
        {
            throw 0;
            
        }
        cout<<"\n the email address is valid";
    }catch(int e)
    {
        cout<<"\n enter the valid email";
    }
    cout<<"\n";
    return 0;
}