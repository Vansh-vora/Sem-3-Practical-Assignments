//Write a program to show values of different data types using templates and constructor
#include<iostream>
#include<typeinfo>
using namespace std;

template <typename T> class Datatype{
    T data;

    public:
    Datatype(T data)
    {
        this->data=data;
    }
    void display()
    {
        cout<<"\n Datatype:"<< typeid(data).name();
        cout<<"\n Data:"<<data;
    }
};
int main()
{
    Datatype<int> obj(10);
    Datatype<float> obj2(10.1);
    Datatype<char> obj3('a');

    obj.display();
    obj2.display();
    obj3.display();

    cout<<"\n";
    return 0;
}