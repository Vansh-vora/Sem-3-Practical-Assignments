//String Copy
#include<iostream>
using namespace std;
int main()
{
    string s1;
    char d[20];

    cout<<"\n Enter String:";
    getline(cin,s1);

    cout<<"\nCopy String";
    s1.copy(d,5);

    cout<<"\n After Coping:"<<d;
    return 0;

}