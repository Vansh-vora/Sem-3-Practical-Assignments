// Create an array of 5 and pass that array to the function names display and print only odd numbers must use pointers.
#include<iostream>
using namespace std;

class ArrayOdd{
    private:
    int arr[5];

    public:
    ArrayOdd()
    {
        for(int i=0;i<5;i++)
        {
            cin>>arr[i];
        }
    }

    void Odd()
    {
        int *ptr=arr;
        cout<<"Odd Numbers in array:";
        for(int i=0;i<5;i++)
        {
            if(*ptr % 2 !=0)
            {
                cout<< *ptr << " ";
            }
            ptr++;
        }
        cout<<endl;
    }
};
int main()
{
    ArrayOdd obj;
    obj.Odd();

    cout<<"\n";
    return 0;
}