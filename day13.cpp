// #Write a program to find Sum of N natural numbers
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,sum;
    cout<<"Enter Number: ";
    cin>>n;
    if(n>0){
        sum=(n*(n+1)/2);
        cout<<"The sum of " <<n<< " numbers is " <<sum;
    }
    else{
        cout<<"Invalid input";
    }
    return 0;
}
