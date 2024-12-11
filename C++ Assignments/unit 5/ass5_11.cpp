// 10. Write a C++ program that reads a list of integers from the user and
// throws an exception if any numbers are duplicates.
#include<iostream>
#include<exception>
using namespace std;
int main()
{
    int n;
    cout<<"\n enter the number of elements of array";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cout<<"\n Enter the "<<i+1<<"element of the array:";
        cin>>arr[i];
    }
    try{
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(arr[i]==arr[j])
                {
                    throw runtime_error("Duplicate element found");
                }
            }
        }
        cout<<"\n No duplicate found";
    }catch (const runtime_error &e)
    {
        cout<<"\n"<<e.what();
    }
    cout<<"\n";
    return 0;
}