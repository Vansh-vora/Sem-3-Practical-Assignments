// 12. Write a C++ program to create a method that takes a string
//     as input and throws an exception if the string does not contain vowels
#include<iostream>
#include<exception>
using namespace std;

class st{
    public:

    void display(string s)
    {
        try
        {
            if(s.find_first_of("aeiouAEIOU")==string::npos)
            {
                throw runtime_error("the string does not contain vowels");
            }
            cout<<"\n the string contain vowels";
        }catch(const runtime_error &e)
        {
            cout<<e.what();
        }
    }
    
}n;
int main()
{
    string name;
    cout<<"\n enter a string :";
    getline(cin,name);

    n.display(name);

    cout<<"\n";
    return 0;

}