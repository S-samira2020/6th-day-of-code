#include<iostream>
using namespace std;
void myself(int arr[] , int sz)
{
    if(sz == 1)
    {
        cout << arr[0] << endl;
    }
    else
    {
        int myvalue = arr[sz-1];
        cout << myvalue << endl;
        myself(arr, sz-1);
    }
}
int main()
{
    int arr[] = {1,2,3,4};
    myself(arr, 4);
    return 0;
}
