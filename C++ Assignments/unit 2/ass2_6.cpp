// Write a C++ program to calculate the area of circle, rectangle and square using function 
// overloading.

#include<iostream>
#include<cmath>
using namespace std;

class Area{
    public:
    int area(int side){
        return pow(side,2);
    }
    int area(int l,int b){
        return l*b;
    }
    float area(float rad){return pow(rad,2)*M_PI;}
}aa;
int main(){
    int l,b,rad,n;

    cout<<"\n You can do these operation--->";
    cout<<"\n 1.Area of Square";
    cout<<"\n 2.Area of Rectangle";
    cout<<"\n 3.Area of Circle";

    cout<<"\n Enter the number of operation:";
    cin>>n;

    switch (n)
    {
        case 1:
        cout<<"\n Enter the side of Square:";
        cin>>l;
        cout<<"\n The Area of Sqaure is"<<aa.area(l);
        break;
        case 2:
        cout<<"\n Enter the length  of Recntangle:";
        cin>>l;
         cout<<"\n Enter the Breath  of Recntangle:";
        cin>>b;
        cout<<"\n The Area of Rectangle is"<<aa.area(l,b);
        break;
        case 3:
        cout<<"\n Enter the radius of circle:";
        cin>>rad;
        cout<<"\n The Area of Sqaure is"<<aa.area(rad);
        break;
    }
    cout<<"\n\n";
    return 0;
}