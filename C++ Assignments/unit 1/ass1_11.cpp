// Write a C++ program to calculate the sum of 6 subject and find the percentage
#include<iostream>
using namespace std;

class Sum{
    public:
    int mark[6];
    void marks()
    {
        for (int  i = 1; i <= 6; i++)
        {
            cout<<"\n Enter the marks of"<<i<<"Subject:";
            cin>>mark[i];
        }
        
    }
    void sum()
    {
        float sums;
        for(int i=1;i<=6;i++)
        {
           sums+=mark[i]; 
        }
        
        cout<<"\n The percentage  you got is:"<< sums / 6;
        
    }
}s;

int main()
{
    s.marks();
    s.sum();
    cout<<"\n";
    return 0;
}