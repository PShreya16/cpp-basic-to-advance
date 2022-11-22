// Write a program to identify of the a number is positive or negative
#include<iostream>
using namespace std;
int main (){
    int a;
    cout<< "Enter a digit";
    cin >> a;
    if(a>0){
        cout<<"Positive number";
    }
        else if(a==0){
            cout <<"Neither positive nor negative";
        }
    else{
            cout<<"Negative number";
        }
    return 0;

}