//create 1d array and store 5 values and do addition of that values/
#include<iostream>
using namespace std;
int main()
{
    int arr[5],i;
    float add=0;
    for(i=0;i<5;i++)
    {
        cout<<"\n Enter a NUmber:";
        cin>>arr[i];
    }
    for(i=0;i<5;i++)
    {
        add+=arr[i];
    }
    cout<<"\n Addition of 1D Array="<<add;
    return 0;
}