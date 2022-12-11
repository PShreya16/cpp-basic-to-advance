// Write a program to reverse a given number
#include <iostream>
using namespace std;
int main(){
    int n, reverse, remainder;
    cout<<"Enter number: ";
    cin>>n;
    while (n!=0){
       remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10; 
    }
    cout<<"Reversed number is " <<reverse;

    return 0;   
}