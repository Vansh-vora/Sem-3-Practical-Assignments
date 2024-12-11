//Write a program to pass an object to template function and display its members.
#include<iostream>
using namespace std;

class Student
{
    public:
    int roll;
    string name;
    Student(int roll,string name)
    {
        this->roll=roll;
        this->name=name;
    }
    void display()
    {
        cout<<"\n Roll:"<<roll;
        cout<<"\n Name:"<<name;
    }
};
template <typename T> void display(T &s)
 {
    s.display();
 }
 int main()
 {
    Student stu(10,"vansh");
    display(stu);

    cout<<"\n";
    return 0;
 }
