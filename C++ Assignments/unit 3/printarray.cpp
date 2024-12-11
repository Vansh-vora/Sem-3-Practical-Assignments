//To Print array 
#include<iostream>
using namespace std;
void printArray(int a[5])
{
    for (int i = 0; i < 5; i++)
    {
        cout<<a[i]<<" ";

    }
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