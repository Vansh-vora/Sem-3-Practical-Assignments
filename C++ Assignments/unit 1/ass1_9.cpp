//Write a C++ Program to compute the square of number series till 10
#include<iostream>
#include<cmath>
using namespace std;

class Square
{
    public:
    void print10()
    {
        for (int i = 1; i <=10; i++)
        {
            cout<<"\nSquare of"<<i<<"is"<<pow(i,2);
        }
        
    }

}s;
int main()
{
    s.print10();
    cout<<"\n";
    return 0;
}