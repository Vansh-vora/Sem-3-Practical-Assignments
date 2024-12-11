//Write a C++ Program to convert days into years and weeks
#include<iostream>
using namespace std;

class TimeManu
{
    public:
    void daytoweek(int days)
    {
        float week=days/7.0;

        cout<<"\n"<<days<<"number of days are"<<week<<"no of week";
    }
    void daytoYear(int days)
    {
        float year=days/365.0;

        cout<<"\n"<<days<<"number of days are"<<year<<"no of year";
    }
    
}t;
int main()
{
    int days;
    cout<<"\nto convert days into year and week:";
    cout<<"\n enter the number of days:";
    cin>>days;

    t.daytoweek(days);
    t.daytoYear(days);

    cout<<"\n";
    return 0;
}