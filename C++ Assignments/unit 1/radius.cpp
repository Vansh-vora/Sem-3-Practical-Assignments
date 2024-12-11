#include<iostream>
#include<cmath>
using namespace std;

class Cir{
    public:

    float area(float r){ return M_PI * pow(r,2);}
}c;

int main(){
    float r;

    cout<<"\n enter the radius of circle:";
    cin>>r;

    cout<<"\n Ans is:"<<c.area(r);
    cout<<"\n\n";
    return 0;
}