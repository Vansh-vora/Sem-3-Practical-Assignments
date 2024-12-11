// Write a C++ Program to create a class employee to print the detail of employees using 
// objects
#include<iostream>
using namespace std;

class Employee
{
    private:
    string name;
    int id;
    double salary;

    public:
    void getdata(string name,int id,double salary)
    {
        this->name=name;
        this->id=id;
        this->salary=salary;
    }
    void showdata()
    {
        cout<<"\n Name:"<<name;
        cout<<"\n Id:"<<id;
        cout<<"\n Salary:"<<salary;
    }
}emp;

int main()
{
    string name;
    int id;
    double salary;

    cout<<"\n Enter the name of employee:";
    cin>>name;
    cout<<"\n enter the id of employee:";
    cin>>id;
    cout<<"\n Enter the salary:";
    cin>>salary;

    emp.getdata(name,id,salary);
    emp.showdata();

    cout<<"\n";
    return 0;
}