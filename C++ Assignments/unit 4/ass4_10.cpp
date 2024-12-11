//Write a program to define definition of member function template outside the class and 
//invoke the function.
#include<iostream>
using namespace std;

class Myclass{
    private:
    int password=10;

    public:
    void display()
    {
        cout<<"\n Hello World";
    }
    template<typename T>
    friend void datashow(T &obj);
};
template <typename T>
void datashow(T &obj)
{
    obj.display();
    cout<<"\n the password is:"<<obj.password;
}
int main()
{
    Myclass obj;
    datashow(obj);

    cout<<"\n";
    return 0;
}