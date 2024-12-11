//Length Capacity Resize
#include<iostream>
using namespace std;
int main()
{
    string s1;
    cout<<"\n Enter String 1:";
    cin>>s1;
    cout<<"\n The String is:"<<s1;
    cout<<"\n String Length is:"<<s1.length();
    cout<<"\n String Capacity is:"<<s1.capacity();
    s1.resize(10);
    cout<<"\n After Resize:"<<s1;
    return 0;
}