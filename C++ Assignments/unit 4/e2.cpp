// create a template function that will take three 3 arguments of same datatype
//pass atleast 3 function which will have int,double,char and find the max value from passed var
#include <iostream>
using namespace std;

template<class One> void fun(One a,One b,One c)
{
    if(typeid(one)==typeid(char))
    {
        int x=static_cast<int>(a);
        int y=static_cast<int>(b);
        int z=static_cast<int>(c);
        if(x>y)
        {
            if(x>z)
            {
                cout<<"Max is:"<<x;

            }
        }
        else if(x<y)
        {
            if(y>z)
            {
                cout<<"Max is:"<<y;
            }
            else
            {
                cout<<"Max is:"<<z;
            }
        }
    }
    else
    {
        return a>b?(a>c?a:c):(b>c?b:c);
    }
};

int main()
{
    fun(1,2,3);
    fun(1.1,2.1,3.1);
    fun('a','b','c');
    
    return 0;
}