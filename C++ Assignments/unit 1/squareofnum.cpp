#include<cmath>
#include<iostream>
using namespace std;

class Square{
    public:

    void Sq(){

    
    for ( int i = 1; i < 10; i++)
    {
       cout<<"\n Square of"<<"is"<< pow(i,2);
    }
    }
}s;

int main(){

    s.Sq();

    cout<<"\n";
    

    cout<<"\n\n";
    return 0;
}