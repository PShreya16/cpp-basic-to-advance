// Write a program to identify if the number is Palindrome or not
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, ogn, rem, rev = 0;
    cout << "enter number:";
    cin >> n;
    ogn = n;
    while (n > 0)
    {
        rem = n % 10;
        rev = (rev * 10) + rem;
        n = n / 10;
    }

    // cout << "The reverse number is " << n<<endl;
    if (ogn == rev)
    {
        cout << "Number is a Palindrome";
    }
    else
    {
        cout << "Number is not a Palindrome";
    }

    return 0;
}