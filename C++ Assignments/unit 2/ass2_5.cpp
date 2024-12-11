//  Write aa c++ program to print Fibonacci series up to a user inputted numbers using 
// recursive function.

#include<iostream>
using namespace std;

class fibo{
    public:
    int fiboo(int a){
    
        if(a <= 1)
        {
            return a;
        }
        else{
            return fiboo(a-1) + fiboo(a-2);
        }
    }

}f;
int main(){
    int a;
    for(int i=1;i<=5;i++){
    cout<<f.fiboo(i);
    }
    cout<<"\n\n";
    return 0;
}