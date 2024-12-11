//Create a Class which will find Simple Interest For the Entered Values.

#include<iostream>
using namespace std;

class SimpleInterest
{
    public:
    int Time;
    int Rate;
    int principle;

};

int main()
{

 SimpleInterest SI;
cout<<"\n Enter the Principle Amount:";
cin>>SI.principle;

cout<<"\n Enter the Rate of Interest:";
cin>>SI.Rate;

cout<<"\n Enter the Time:";
cin>>SI.Time;

double Simple=(SI.principle)*(SI.Rate)*(SI.Time)/100;

cout<<"\n The Simple Interest of entered values is="<<Simple;

cout<<"\n\n";
return 0;
}
