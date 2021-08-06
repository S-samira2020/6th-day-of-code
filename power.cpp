#include<iostream>
using namespace std;
int myself(int num, int power)
{
    if(power == 1)
    {
        return num;
    }
    else
    {
        int mypart = num;
        int colpart = myself(num, power-1);
        int myresult = mypart * colpart;
        return myresult;
    }
}
int main()
{
    cin >> num >> power;
    cout << myself(num,10) << endl;
}
