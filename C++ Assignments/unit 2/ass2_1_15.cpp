// Write a C++ Program to find the cube of a number using Inline Function.
#include<iostream>
using namespace std;

class Fun{public: 
        inline int sum(int a,int b){return a+b;}
    }s;
    int main()
    {
        int a,b;
        cout<<"\n enter no1:";
        cin>>a;
        cout<<"\n enter no2:";
        cin>>b;
        int sum=s.sum(a,b);

        cout<<"\n Addition is:"<<sum;
        cout<<"\n";
        return 0;
    }