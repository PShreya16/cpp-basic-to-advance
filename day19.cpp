//  Write a program to identify if the number is Armstrong number or not
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int ognum,num,i,rem,mul=0;
    cout<<"Enter the number: ";
    cin>>num;
    ognum=num;
    while(ognum!=0){
        rem=ognum%10;
        mul+=rem*rem*rem;
        ognum /= 10;
    }
    if(num==mul){
            cout<<"The number "<<num<<" is an Armstrong number";
        }
    else{
            cout<<"The number "<<num<<" is not an Armstrong number";

        }
    return 0;
} 
