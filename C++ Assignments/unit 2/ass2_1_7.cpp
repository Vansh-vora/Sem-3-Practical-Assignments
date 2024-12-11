//  Create a class employee with name, salary, age as member, use get_data() and show() 
// functions. Display details of 3 manager employees.
#include<iostream>
using namespace std;

class Employee
{
    private:
    string name;
    double salary;
    int age;

    public:
    void getdata(string name,double salary,int age)
    {
        this->name=name;
        this->salary=salary;
        this->age=age;
    }
    void show()
    {
        cout<<"\n Name:"<<name;
        cout<<"\n Salary:"<<salary;
        cout<<"\n Age:"<<age;
    }
}emp[3];
int main()
{
    int age;
    string name;
    double salary;

    for(int i=0;i<3;i++)
    {
        cout<<"\n enter the name of employee "<<i<<":";
        cin>>name;
        cout<<"\n enter the salary:";
        cin>>salary;
        cout<<"\n enter the age:";
        cin>>age;
        emp[i].getdata(name,salary,age);
    }
    for(int i=0;i<3;i++)
    {
        emp[i].show();
    }
    cout<<"\n";
    return 0;
}