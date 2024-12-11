//  Create a class employee with name, salary, age as member, use get_data() and show() 
// functions. Display details of 3 manager employees.

#include<iostream>
#include<string>
using namespace std;

class Employee{
    private:   
    string name;
    double salary;
    int age;

    public:
    void get_data(string name,double salary,int age){
        this->name=name;
        this->salary=salary;
        this->age=age;
       
    }
    void show(){
        cout<<"\n Name:"<<name;
        cout<<"\n Salary:"<<salary;
        cout<<"\n Age:"<<age;
    }
}emp[3];

int main(){
    int age;
    string name;
    double salary;


    for(int i=0;i<3;i++)
    {
        cout<<"\n Enter the name of Employee:";
        cin>>name;
        cout<<"\n Enter the Salary of Employee:";
        cin>>salary;
        cout<<"\n Enter the Age of Employee:";
        cin>>age;
        emp[i].get_data(name,salary,age);
    }
    for(int i=0;i<3;i++)
    {
        emp[i].show();
    }

    cout<<"\n\n";
    return 0;
}