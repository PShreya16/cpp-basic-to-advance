// Write a program to find the Factors of a number
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num,i;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Factors:"<<endl;
    for (i=1;i<=num;i++){
        if(num%i==0){
            cout<<i<< " ";
        }
        // else{
        //     cout<<"Invalid input";
        // }
   }
   return 0;
}