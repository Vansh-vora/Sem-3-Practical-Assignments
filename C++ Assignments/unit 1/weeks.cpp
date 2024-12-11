#include<iostream>
using namespace std;

class weeks{
    public:

    void weak(float days){
       float weak= days / 7.0;
        cout<<"\n Your Week are:"<<weak;
    }
    void year(float days){
       float year= days / 365.0;
        cout<<"\n Your Year are:"<<year;
    }
    
}w;

int main(){

    float days;
    cout<<"\n enter no of days:";
    cin>>days;

    w.weak(days);
    w.year(days);
    cout<<"\n\n";
    return 0;
}