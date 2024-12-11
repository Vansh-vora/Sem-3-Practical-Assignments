// Write a C++ to create a class Subject to print the detail of Subject Code, Subject Name using
// objects.
#include<iostream>
using namespace std;

class Subject
{
    private:
    int code;
    string name;

    public:
    void getdata(int code,string name)
    {
        this->code=code;
        this->name=name;
    }
    void showdata()
    {
        cout<<"\n Code:"<<code;
        cout<<"\n Name:"<<name;
    }

}s;
int main()
{
    int code;
    string name;

    cout<<"\n enter the code of subject:";
    cin>>code;
    cout<<"\n enter the name of subject:";
    cin>>name;

    s.getdata(code,name);
    s.showdata();

    cout<<"\n";
    return 0;
}