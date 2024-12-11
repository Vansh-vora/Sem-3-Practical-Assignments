// 8 Write a program to explain the concept of multiple catch statements on
// above program.
#include<iostream>
#include<exception>
using namespace std;

class num{
    public:
    
    int display(int a)
    {
        
        try{
            if(a<0)
            {
                throw invalid_argument("Negative Value");
            }
            else if(a==0)
            {
                throw runtime_error("the number is zero");
            }
            else{
                cout<<"\n the number is positive";
            }
        }catch (const runtime_error(e)){
            cout<<"\n Caught this error:"<<e.what();
        }
    }

}n;
int main(){

    
        int a;
        cout<<"\n enter the positive num:";
        cin>>a;

    n.display(a);

    cout<<"\n";
    return 0;
}