//Write a C++ program using Switch statement example to generate days of the week
#include<iostream>
using namespace std;

class Days
{
    public:
    void findDay(int x)
    {
        switch(x)
        {
            case 1:
            cout<<"\n Sunday";
            break;
             case 2:
            cout<<"\n Monday";
            break;
             case 3:
            cout<<"\n Tuesday";
            break;
             case 4:
            cout<<"\n Wednesday";
            break;
             case 5:
            cout<<"\n Thrusday";
            break;
             case 6:
            cout<<"\n Friday";
            break;
             case 7:
            cout<<"\n Satruday";
            break;
        default:
        break;
            
        }
    }
}dd;
int main()
{
    cout<<"\n------To find a day------";
    int a;
    cout<<"\n enter a number of the day";
    cin>>a;

    dd.findDay(a);

    cout<<"\n";
    return 0;
}