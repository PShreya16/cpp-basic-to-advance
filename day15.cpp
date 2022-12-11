// Write a program to identify if the number is Strong number or not
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n, f, rem, sum=0 ;
    cout<<"Enter number: ";
    cin>>n;
    int e=n;
    while (n>0){
        rem=n%10;
        f=1;
        for (int i=1;i<=rem;i++){
            f=f*i;
        }
        sum=sum+f;
        n=n/10;
    }
    if(e==sum){
        cout<<"Strong number";
    }
    else{
        cout<<"Not a strong number";
    }
return 0;

} 