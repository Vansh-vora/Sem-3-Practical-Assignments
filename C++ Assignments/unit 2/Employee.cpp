//Create a Class name Employee Details which will take variables for Employee name and Salary.If the salary of the employee is above 50000 then cut TDS 1800 and add HR Allowance 500.
#include<iostream>
#include<string>
using namespace std;

class Employee
{
    public:
    string name;
    double salary;
};

int main()
{
    Employee emp;

    double TotalSalary;

    cout<<"\n Enter Your name:";
    cin>>emp.name;
    cout<<"\n Enter your Salary";
    cin>>emp.salary;

    if(emp.salary>50000)
    {
        int tds=1800;
        int hr=500;

        TotalSalary=emp.salary-tds+hr;

        cout<<"\n Your Total Salary is="<<TotalSalary;
    }
    else{
        cout<<"\n Your Total Salary is="<<emp.salary;
    }

    cout<<"\n\n";
    return 0;
}