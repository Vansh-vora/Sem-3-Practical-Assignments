// 3. Write a program to take array values from user and illustrate array index
// out of bound exception
#include<iostream>
#include<exception>
using namespace std;

int main()
{
    int n;
    cout<<"\n enter the number of elements of array:";
    cin>>n;

    int arr[n];

    try{
        int i;
        cout<<"\n enter the index of the array you want to access:";
        cin>>i;
        if(i>n)
        {
            throw 1;
        }
        cout<<"\n the value at "<<i<<"index is:"<<arr[i];
    }catch (int e){
        cout<<"\n Your array index accessing is out of bond";
    }
    cout<<"\n";
    return 0;
}