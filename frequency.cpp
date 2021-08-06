#include<iostream>
using namespace std;
int myself(int arr[], int sz, int search_val)
{
    if(sz == 1)
    {
        if(arr[0] == search_val)
        {
            return 1;
        }

        else
        {
            return 0;
        }
    }
    else

    {
        int myvalue  = arr[sz-1];
        int colvalue = myself(arr, sz-1, search_val);
        if(myvalue == search_val)
        {
            return 1 + colvalue;
        }
        else

        {
            return 0 + colvalue;
        }
    }
}
int main()
{
    int arr[] = {1,2,1,2,3, 1};
    int search_val = 3;
    int result = myself(arr, 6, search_val);
    cout << result << endl;
    return 0;
}
