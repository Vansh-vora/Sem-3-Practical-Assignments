// Write a C++ program to calculate the area of circle, rectangle and square using function 
// overloading.
#include<iostream>
#include<cmath>
using namespace std;

class Area
{
    public:
    int area(int side)
    {
        return pow(side,2);
    }
    int area(int l,int b)
    {
        return l*b;
    }
    float area(float rad){return pow(rad,2)*M_PI;}
}aa;
int main()
{
    int sid,l,b,rad,n;

    cout<<"\n Which op did you want to perform:";
    cout<<"\n1.Area of Sqaure";
    cout<<"\n2.Area of Recntage";
    cout<<"\nArea of Circle";

    cout<<"\n Enter the choice:";
    cin>>n;

    switch(n)
    {
        case 1:
        cout<<"\n enter the side of square:";
        cin>>sid;
        cout<<"\n The Area of Square is:"<<aa.area(sid);
        break;

        case 2:
        cout<<"\n enter the length of rectange:";
        cin>>l;
        cout<<"\n enter the breath of recatange:";
        cin>>b;
        cout<<"\n The Area of Rectangle is:"<<aa.area(l,b);
        break;

        case 3:
        cout<<"\n Enter the radius:";
        cin>>rad;
        cout<<"\n the area of square:"<<aa.area(rad);
        break;
    }
    cout<<"\n";
    return 0;
}