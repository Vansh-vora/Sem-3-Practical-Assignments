// Write a C++ program to swap numbers using friend function.
#include<iostream>
using namespace std;

class Swap{
    private:
    int a;
    int b;

    public:
    void getData(int x,int y)
    {
        this->a=x;
        this->b=y;
    }
    void showData()
    {
        cout<<"\n a:"<<a;
        cout<<"\n b:"<<b;
    }
    friend void swap(Swap &obj);
};
void swap(Swap &obj){
    int temp=obj.a;
    obj.a=obj.b;
    obj.b=temp;
}

int main(){
    Swap o1;
    o1.getData(5,10);

    cout<<"\n Before Swapping:";
    o1.showData();
    swap(o1);

    cout<<"\n After Swapping:";
    o1.showData();

    cout<<"\n\n";
    return 0;
}