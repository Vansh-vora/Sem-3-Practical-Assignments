#include<iostream>
using namespace std;

int main()
{
    int arr[3][3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            arr[i][j][k]=i+j+k;
        }
    }

    for(int i=0;i<3;i++)
    {
        cout<<"For layer "<<i<<endl;

        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                cout<<arr[i][j][k]<<" ";
            }
           cout<<"\n";
        }
        cout<<"\n";
    }
    return 0;
}