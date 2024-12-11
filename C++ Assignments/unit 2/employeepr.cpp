#include<iostream>
using namespace std;

class emp{
    private:
    string name;
    float salary;
    int age;

    public:
    void get_data(){
        cout<<"\n enter the name of the emp:";
        cin>>name;
        cout<<"\n enter the salary of the emp:";
        cin>>salary;
        cout<<"\n enter the age of the emp:";
        cin>>age;
    }
    void show(){
        cout<<"\n Name:"<<name;
        cout<<"\n Salary:"<<salary;
        cout<<"\n Age:"<<age;
    }
}e[3];

int main(){
    cout<<"\n enter the details of 3 managers:";
    for ( int i = 0; i <3; i++)
    {
        e[i].get_data();
    }
    
    cout<<"\n entered details of 3 managers are:";
    for (int i = 0; i < 3; i++)
    {
        e[i].show();
    }
    
    cout<<"\n\n";
    return 0;
}