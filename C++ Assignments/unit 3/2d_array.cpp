//Create 2D array and print that values in matrix.
#include<iostream>
using namespace std;
int main()
{
    int numbers[2][3];
    int i,j;
    cout<<"\n enter 6 numbers:";
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>numbers[i][j];
        }
    }
    cout<<" the Matrix is :"<<"\n";
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<< numbers[i][j];
        }
        cout<<"\n";
    }
    return 0;
}