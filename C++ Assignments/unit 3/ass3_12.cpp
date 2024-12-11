//12. Write a C++ Program for two string Name & Surname of a student and concate that two string 
#include<iostream>
#include<string>
using namespace std;

class st{
    public:
     string fname,lname;
    void uservalue()
    {   
   

        cout<<"\n enter first name:";
        cin>>fname;
        cout<<"\n enter last name:";
        cin>>lname;
    }
    void display()
    {
        cout<<"\n First Name:"<<fname;
        cout<<"\n Last Name:"<<lname;
    }
    void concate()
    {
        string fullname=fname.append(lname);
        cout<<"\n FullName:"<<fullname;
    }
    
}s;
int main()
{
    s.uservalue();
    s.display();
    s.concate();
    cout<<"\n";
    return 0;
}