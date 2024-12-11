//Write a program to input n integer numbers and display highest and second highest number. 
//Also handle the different exceptions possible to be thrown during execution.
#include<iostream>
#include<exception>
using namespace std;
int main()
{
    int n;
    cout<<"\n enter the number of array elements:";
    cin>>n;

    try{
        if(n<=1)
        {
            throw 1;
            int arr[n];

            for(int i=0;i<n;i++)
            {
                cout<<"\n enter the number on["<<i<<"] index:";
                cin>>arr[i];
            }
            int max=0;
            int smax=0;
            for(int i=0;i<n;i++)
            {
                if(arr[i]=max)
                {
                    smax=max;
                    max=arr[i];
                }
            }
            cout<<"\n the largest number in array is:"<<max;
            cout<<"\n the second largest is:"<<smax;
    } catch (int e)
    {
        cout<<"\n enter more than one number";

    }
    cout<<"\n";
    return 0;
}