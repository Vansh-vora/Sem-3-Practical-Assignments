#include<iostream>
using namespace std;
class Operation{
    public:
    int uservalue(){
        int a,b;
        cout<<"\n enter value of n1:";
        cin>>a;
        return a;
    }

    void armstrong(){
        int a=uservalue();
        int rem =0,sum=0;
        for (int i = a; i !=0; i/=10)
        {
            rem =i %10;
            sum += rem *rem*rem; 
        }
        if(sum==a){
            cout<<"\n Armstrong number hai";

        }
        else{
            cout<<"\n Armstrong number nahi hai";
        }
        
    }
    void pendrome(){
        int a=uservalue();
        int rem =0,remnum=0;
        for (int i = a; i != 0; i/=10)
        {
            rem = 1%10;
            remnum=remnum *10 + rem;
        }
        if(a==remnum)
        {
            cout<<"\n Palendrome hai";
        }
        else
        cout<<"\n Palendrome nahi hai";

        
    }
}o;

int main()
{

    o.armstrong();
    o.pendrome();
    cout<<"\n\n";
    return 0;
}