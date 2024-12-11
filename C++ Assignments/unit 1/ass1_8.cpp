//Write a C++ program to find greatest number between 3 number using if-else-if statements.
#include<iostream>
using namespace std;

class Greatest
{
    public:
    int Maxof3(int a,int b,int c)
    {
        if(a>=b && a>=c)
        {
            return a;
        }
        else if(b>=c && b>=a)
        {
            return b;
        }
        else if(c>=a && c>=b)
        {
            return c;
        }
        return -1;
    }
}m;
int main()
{
    int a,b,c;
    cout<<"\n enter the value of a:";
    cin>>a;
    cout<<"\n enter the value of b:";
    cin>>b;
    cout<<"\n enter the value of c:";
    cin>>c;

    int max= m.Maxof3(a,b,c);

    cout<<"\n Max of all number:"<<max;
    cout<<"\n";
    return 0;
}