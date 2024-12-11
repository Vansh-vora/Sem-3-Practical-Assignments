//Write a C++ Program to print following pyramid
//********
//* *
//* *
//* *
//********
#include<iostream>
using namespace std;

class pattern{
    public:
    int uservalue()
    {
        int a;
        cout<<"\n enter the number of rows:";
        cin>>a;
        return a;
    }
    void pp(int a)
    {
        for(int i=1;i<=a;i++)
        {
            for(int j=1;j<=a;j++)
            {
                if(i==1 ||j==1 || i==a ||j==a)
                {
                    cout<<"* ";
                }
                else
                {
                    cout<<" ";
                }
            }
            cout<<"\n";
        }
    }
}p;
int main()
{
    int a=p.uservalue();
    p.pp(a);
    cout<<"\n";
    return 0;
}