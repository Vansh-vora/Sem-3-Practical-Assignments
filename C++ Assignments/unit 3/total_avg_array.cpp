//Find total and avg of array
#include<iostream>
using namespace std;
void printArray(int a[5])
{
    int total;
    for (int i = 0; i < 5; i++)
    {
        cout<<a[i]<<" ";
        total+=a[i];

    }
    cout<<"\nTotal="<<total;
     int avg=total/5;
    cout<<"\n Avg="<<avg;
    cout<<"\n";
    
}
int main()
{
    int arr1[5]={10,20,30,40,50};
    int arr2[5]={5,15,25,35,45};
    printArray(arr1);
    printArray(arr2);
    
    return 0;
    
}