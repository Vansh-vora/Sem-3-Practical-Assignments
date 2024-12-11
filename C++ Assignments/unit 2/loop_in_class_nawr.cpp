#include<iostream>
using namespace std;

class loop_in_class_nawr
{
    public:
    int a;

       int func()
       {
            if(a%2==0)
            {
                return 1;
            }
            else{
                return 0;
            }
       }
}obj;

int main()
{
    int ans;
    cout<<"\n Enter a Number:";
    cin>>obj.a;

    ans=obj.func();

    if(ans==1){
        cout<<"even";
    }
    else
    {
        cout<<"odd";
    }
    cout<<"\n\n";
    return 0;
}