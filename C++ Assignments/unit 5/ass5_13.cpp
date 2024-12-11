// 13. Write a C++ program to take a value from user and check the number is
// armstrong or not, If not than raise an exception.
#include<iostream>
#include<exception>
using namespace std;

class arm{
    public:

    void display(int num)
    {
        try{
            if(num<=0)
            {
                throw 0;
            }
            int sum=0;
            int rem=0;

            for(int i=num;i!=0;i/=10)
            {
                rem=i%10;
                sum+=rem*rem*rem;
            }
            if(sum==num)
            {
                cout<<"\n the number is armstrong";
            }
            else{
                throw 1;
            }
        }catch(int e)
        {
            if(e==0)
            {
                cout<<"\n enter the valid number";
            }
            else{
                cout<<"\n not valid";
            }
        }
    }
}d;

int main()
{
    int num;

    cout<<"\n enter the armstrong number:";
    cin>>num;

    d.display(num);

    cout<<"\n";
    return 0;
}