//Write a C++ Program to add, subtract, multiply and divide two numbers using class 
//template.

#include<iostream>
using namespace std;

template <class C> class Arithmetic{
    public:
    C num1,num2;
    Arithmetic(C num1,C num2)
    {
        this->num1=num1;
        this->num2=num2;
    }
    void add()
    {
        cout<<"\n Sum of:"<<num1<<"and"<<num2<<"is"<<(num1+num2);
    }
    void sub()
    {
        cout<<"\n Sub of:"<<num1<<"and"<<num2<<"is"<<(num1-num2);
    }
    void mul()
    {
        cout<<"\n Mul of:"<<num1<<"and"<<num2<<"is"<<(num1*num2);
    }
    void div()
    {
        cout<<"\n Div of:"<<num1<<"and"<<num2<<"is"<<(num1/num2);
    }

};
int main()
{
    Arithmetic<int> obj(10,20);
    obj.add();
    obj.sub();
    obj.mul();
    obj.div();

    Arithmetic<float> obj2(10.3,20.3);
    obj2.add();
    obj2.sub();
    obj2.mul();
    obj2.div();

    cout<<"\n";
    return 0;
}