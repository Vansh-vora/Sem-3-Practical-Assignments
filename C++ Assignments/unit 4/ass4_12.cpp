//Write a program to create template class to find simple interest of integer and float value 
//using function template.
#include<iostream>
using namespace std;

template <typename T1, typename T2>
    auto simpleinterest(T1 principle, T2 rate, int time)
    {
        return principle*rate*time/100;
    }
int main()
{
    int principle=1000;
    float rate=5.5;
    int time =5;
    cout<<"\n simple int of:"<<principle<<"with"<<rate<<"and"<<time<<"years is:"<<simpleinterest(principle,rate,time);
    
    cout<<"\n";
    return 0;
}
