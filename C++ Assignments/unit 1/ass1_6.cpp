//Write a C++ program to find the area of a circle
#include<iostream>
#include<cmath>
using namespace std;

class Area{
    public:
    float area(float r){
        return M_PI *pow(r,2);
    }
}a;

int main()
{
    float r;
    cout<<"\n enter the radius:";
    cin>>r;

    cout<<"\n The area of circle:"<<a.area(r);

    cout<<"\n";
    return 0;
}