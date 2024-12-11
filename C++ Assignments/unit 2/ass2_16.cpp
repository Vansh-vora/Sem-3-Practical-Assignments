//  Write a C++ Program to find the sum of Numbers using Recursive Function

#include<iostream>
using namespace std;

class Sum{
    public:
    int sum(int a)
    {
        if(a<=1)
        {
            return a;
        }
        else{
            return a+sum(a-1);
        }
    }
}s;
int main()
{
    int num;
    
    cout<<"\n Enter a num:";
    cin>>num;

   cout<<"\n Ans is:"<<s.sum(num);

    cout<<"\n\n";
    return 0;
}