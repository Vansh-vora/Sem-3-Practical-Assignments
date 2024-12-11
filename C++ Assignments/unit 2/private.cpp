#include<string>
#include<iostream>
using namespace std;

class Student{
    private:
    string name;
    float marks;

    public:
    void setName(string studentName) { name= studentName; }
    void setMarks(float Marks) {marks= this.Marks; }
    string getName() {return name; }
    float getMarks() {return marks; }
}stu;

int main(){
    float marks;
    string name;

    cout<<"\n enter the name:";
    cin>>name;
    cout<<"\n enter the marks:";
    cin>>marks;

    stu.setName(name);
    stu.setMarks(marks);

    cout<<"\n Name:"<<stu.getName();
    cout<<"\n Marks:"<<stu.getMarks();

    cout<<"\n\n";
    return 0;
}