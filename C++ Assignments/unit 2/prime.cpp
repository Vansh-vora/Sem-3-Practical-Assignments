#include<iostream>
using namespace std;

class Prime{
    public:
    bool primecheck(int a){
        for (int i = 2; i <= a/2; i++)
        {
            if(a % 1==0){
                return false;
            }
        }
        return true;
        
    }
}p;

int main()
{
    int a;
    cout<<"\n enter a number";
    cin>>a;

    if(p.primecheck(a)){
        cout<<"\n The number "<< a << "is a prime number";
    }
    else{
        cout<<"\n the number"<< a << "is not a prime number";
    }

    cout<<"\n\n";
    return 0;
}