//string compare
#include<iostream>
using namespace std;
int main()
{
    string s1,s2;
    int result;
    cout<<"\n enter 1 String:";
    getline(cin,s1);
    cout<<"\n enter 2 String:";
    getline(cin,s2);

    result=s1.compare(s2);//Compare is done according to ascii

    if(result==0)
    {
        cout<<"\n Both input are equal";
    }
    else if(result<0)
    {
        cout<<"\n String 1 is smaller than String 2";
    }
    else
    {
        cout<<"\n String 2 is smaller than String 1";
    }
    return 0;
}