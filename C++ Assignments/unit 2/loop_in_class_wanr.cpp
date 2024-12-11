#include<iostream>
using namespace std;

class Loop_Example_nrna
{
    public:

        void func(int start,int end)
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
    int start,end;
    cout<<"\n Enter the starting value:";
    cin>>start;
    cout<<"\n enter the ending value:";
    cin>>end;

    le.func(start,end);

    cout<<"\n\n";
    return 0;
}