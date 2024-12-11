//Write an overloaded template function area that calculates area of different shapes
#include<iostream>
using namespace std;
 
 template <typename T>
 T area(T height)
 {
    return height*height;
 }
 template <typename T>
 T area(T height,T widht)
 {
    return height*widht;
 }
 int main()
 {
    cout<<"\n In INt:";
    cout<<"\n area of rectangle:"<<area(5);
    cout<<"\n area of square:"<<area(5,5);
     cout<<"\n In float:";
    cout<<"\n area of rectangle:"<<area(5.5);
    cout<<"\n area of square:"<<area(5.6,5.5);

    cout<<"\n";
    return 0;
 }