// Write a C++ Program to create a class employee to print the detail of employees using 
// objects
#include<iostream>
#include<string>
using namespace std;

class Employee{
    private:
    string name;
    int id;
    double salary;

    public:
    void getData(string name,int id,double salary)
    {
        this->name=name;
        this->id=id;
        this->salary=salary;
    }
    void showData()
    {
        cout<<"\n Name:"<<name;
        cout<<"\n ID:"<<id;
        cout<<"\n Salary:"<<salary;
    }
}emp;
int main()
{   
    string name;
    int id;
    double salary;

    cout<<"\n Enter the name of Employee:";
    cin>>name;
    cout<<"\n Enter the ID of Employee:";
    cin>>id;
    cout<<"\n Enter the Salart of Employee:";
    cin>>salary;

    emp.getData(name,id,salary);
    emp.showData();

    cout<<"\n\n";
    return 0;
}