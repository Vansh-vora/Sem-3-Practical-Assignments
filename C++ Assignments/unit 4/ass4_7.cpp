//Write a C++ Program to display largest among two numbers using function templates. Pass 
//Integer, Float and Character as parameter to the template.
#include<iostream>
using namespace std;

template <typename T> T findLargest(T a, T b)
{
    if(a>b)
    {
        return a;
    }
    else{
        return b;
    }
}
int main()
{
    cout<<"\n The largest bet 5 and 10 is:"<<findLargest(5,10);
    cout<<"\n";
    cout<<"\n The largest bet 5.6 and 10.1 is:"<<findLargest(5.6,10.1);
    cout<<"\n";
     cout<<"\n The largest bet a and b is:"<<findLargest('a','b');
     cout<<"\n\n";
     return 0;
}
