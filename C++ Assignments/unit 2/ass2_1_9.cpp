//Write a C++ program to swap numbers using friend function. 
#include<iostream>
using namespace std;

class Swap
{
    private:
    int a;
    int b;

    public:
    void getData(int x,int y)
    {
        this->a=x;
        this->b=y;
    }
    void showData()
    {
        cout<<"\n a:"<<a;
        cout<<"\n b:"<<b;
    }
    friend void swap(Swap &s);
}o1;
void swap(Swap &s)
{
    int temp=s.a;
    s.a=s.b;
    s.b=temp;

}
int main()
{
    o1.getData(5,10);
    cout<<"\n Before";
    o1.showData();
    swap(o1);
    cout<<"\n After";
    o1.showData();

    cout<<"\n";
    return 0;
}