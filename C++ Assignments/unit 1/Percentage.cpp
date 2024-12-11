#include<iostream>
using namespace std;

class Result{
    public:

    int mark[6];
        void marks(){
            for (int  i = 0; i < 6; i++)
            {
                cout<<"\n enter marks of:"<<i+1<<"subjet:";
                cin>>mark[i];
            }
            
        }
        void percentage(){
            int sum =0;
            marks();
            for ( int i = 0; i < 6; i++)
            {
                sum += mark[i];
            }
            cout<<"\n the percentage you got is:"<<sum/6;
            
        }
    }m;

    int main(){
        m.percentage();
        cout<<"\n\n";
        return 0;
    }