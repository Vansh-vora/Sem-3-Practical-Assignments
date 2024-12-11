#include<iostream>
using namespace std;

class fib{
    public:

    int fibonacci(int a){
        if(a<=1){
            return a;
        }
        else{
            return fibonacci(a-1) + fibonacci(a-2);
        }
    }
}f;

int main(){
    int a;
    cout<<"\n enter a number:";
    cin>>a;

    cout<<"\n Fibonaaci series up to "<< a << "terms:";
    for(int i=0; i<a;i++)
    {
        cout<<f.fibonacci(i)<<" ";
    }

    cout<<"\n\n";
    return 0;

}