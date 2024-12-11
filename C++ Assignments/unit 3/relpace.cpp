//String Replace
#include<iostream>
using namespace std;
int main()
{
    string s1;

    cout<<"\n Enter String 1:";
    getline(cin,s1);

    cout<<"\n Before Replacing:"<<s1;

    s1.replace(5,7,"day");
    cout<<"\n After Replacing:"<<s1;

    return 0;
}