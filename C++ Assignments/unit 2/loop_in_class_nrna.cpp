#include<iostream>
using namespace std;

class Loop_Example_nrna
{
    public:
    int start,end;

        void func()
        {
            if(start<end)
            {
                int i=start;
                    while(i<=end)
                    {
                        cout<<i<<"\n";
                        i++;
                    }
            }
            else  if (start>end)
            {
                int i=start;
                    while (i>=end)
                    {
                        cout<<i<<"\n";
                        i--;
                    }
                    
            }
            else
            {
                cout<<"\n Both are same value";
            }
            
        }
}le;
int main()
{
    cout<<"\n Enter the starting value:";
    cin>>le.start;
    cout<<"\n enter the ending value:";
    cin>>le.end;

    le.func();

    cout<<"\n\n";
    return 0;
}