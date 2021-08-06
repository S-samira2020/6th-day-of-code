#include<iostream>
using namespace std;
void myself(int num)
{
    if(0 <= num && num<= 9)
    {
        cout << num <<endl;
    }
    else
    {
        int mydigit = num % 10;
        int restdigit = num / 10;
        cout << mydigit << endl;
        myself(restdigit);
    }
}
int main()
{
    myself(12389);
    return 0;
}

