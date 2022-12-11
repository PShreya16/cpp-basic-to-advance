// Write a program to print Pyramid pattern using stars
#include <iostream>
using namespace std;
int main()
{
    int i, j, n; // n=rows, j=space
    cout << "Enter number of rows: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
    int k=0;

        for (j = 1; j <= (n-i); j++)
        {
            cout <<" ";
        }
        while (k!=(2*i-1)){
            cout<<"* ";
            ++k;
        }
        cout << endl;
    }
    return 0;
}