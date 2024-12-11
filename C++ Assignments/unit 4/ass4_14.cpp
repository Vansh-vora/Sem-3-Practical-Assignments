//Write a program that has a template class STUDENT to read and print the details of student. 
//Use multiple arguments
#include<iostream>
using namespace std;

template <typename T1, typename T2 > class Student{
    T1 roll;
    T2 name;

    public:
    Student(T1 roll, T2 name)
    {
        this->roll=roll;
        this->name=name;
    }
    void display()
    {
        cout<<"\n Roll:"<<roll;
        cout<<"\n Name"<<name;
    }
};
int main()
{
    Student <int,string>std1(101,"Vansh");
    Student <int,string>std2(102,"Sarthak");
    Student <int,string>std3(103,"Vinay");

    std1.display();
    std2.display();
    std3.display();

    cout<<"\n";
    return 0;
}
