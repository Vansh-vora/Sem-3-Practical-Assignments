// Design a class Student with private data members (name,Marks) and public member 
// functions (setName, setMarks, getName, getMarks) to demonstrate Public and Private 
// access specifiers.

#include<iostream>
#include<string>
using namespace std;

class Student{
    private:
    string name;
    float marks;

    public:
        void setname(string setName){name=setName;}
        void setmarks(float setMarks){marks=setMarks;}
        void getname(){
            cout<<"\n Your Name is :"<<name;
        }
        void getmarks(){
            cout<<"\n Your Marks is :"<<marks;
        }
}s;

int main()
{
    string name;
    float marks;
    cout<<"\n Enter the Name:";
    cin>>name;
    cout<<"\n Enter the Marks:";
    cin>>marks;

    s.setname(name);
    s.setmarks(marks);

    s.getname();
    s.getmarks();
    cout<<"\n\n";
    return 0;
}