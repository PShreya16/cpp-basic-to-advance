// Write a program to find Number of digits in an integer
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int integer, num;
    cout << "Enter integer: ";
    cin >> integer;
    if (integer == 0)
    {
        cout << "The number of digits in integer is 1";
    }
    else
    {
        while (integer != 0)
        {
            integer = integer / 10;
            num++;
        }
        cout << "The number of digits in integer are " << num;
    }

    return 0;
}
