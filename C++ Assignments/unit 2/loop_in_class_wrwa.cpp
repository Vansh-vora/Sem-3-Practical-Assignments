#include<iostream>
using namespace std;

class loop_in_class_nawr
{
    public:
    

       int func(int a)
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
    int ans,a;
    cout<<"\n Enter a Number:";
    cin>>a;

    ans=obj.func(a);

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