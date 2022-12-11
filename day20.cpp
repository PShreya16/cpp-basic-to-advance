// Write a program to identify if the number is Prime number or not
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num, i;
    bool is_prime=true;
    cout << "Enter number: ";
    cin >> num;
    if (num == 0 || num == 1)
    {
        is_prime = false;

    }
    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            is_prime = false;
        }
    }
        if (is_prime)
        {
            cout << "The number " << num << " is a prime number";
        }

        else
        {
            cout << "The number " << num << " is not a prime number";
        }
    

    return 0;
}