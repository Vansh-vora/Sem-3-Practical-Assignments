//  Write a c++ Program to demonstrate the use of Friend class to access the member of one 
// class.

#include<iostream>
using namespace std;

class Demo{
    private:
    int a;

    public:
    void setData(int a)
    {
        this->a=a;
    }
    friend void showData(Demo &obj);
}de;
    void showData(Demo &obj)
    {
        cout<<"\n Value:"<<obj.a;
    }

int main()
{
    int a;

    cout<<"\n enter data:";
    cin>>a;

    de.setData(a);

    cout<<"\n Showing Data with Friend Function:";
    showData(de);

    cout<<"\n\n";
    return 0;
}
