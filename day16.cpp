// Write a program to identify if the number is Perfect number or not
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int i, num, sum=0;
    cout<< "Enter the number: ";
    cin>>num;
    for(i=1; i<num; i++){
        if(num%i==0){
        sum=sum+i;
       }
       else{
        sum=sum;
       }
    }
    if(num==sum){
    cout<<"The number is a perfect number";
    }
    else{
    cout<<"The number is a not perfect number";

    }
    return 0;
}