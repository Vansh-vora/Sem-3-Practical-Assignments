//2. Write a c++ Program to illustrate the traversal of a 2D Array.
#include<iostream>
using namespace std;

class Array{
    public:
    int userrow(){
        int size;
        cout<<"\n enter the size of array:";
        cin>>size;
        return size;
    }
    int usercol()
    {
        int size;
        cout<<"\n enter the size of column of array:";
        cin>>size;
        return size;
    }
}a;
int main()
{
    int row=a.userrow();
    int col=a.usercol();
    int array[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<"enter the element"<<i+1<<" "<<j+1<<":";
            cin>>array[i][j];
        }
    }
    cout<<"\n the elements of array are:\n";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";
    return 0;
}