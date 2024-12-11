//String Reverse
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s1;

    cout<<"\n Enter the String:";
    getline(cin,s1);

    cout<<"\nBefore Reverse string:"<<s1;

    reverse(s1.begin(),s1.end());
    cout<<"\n After Reverse String:"<<s1;

    return 0;
}