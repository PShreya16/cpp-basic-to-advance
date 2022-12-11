// Write a program to Add two fractions
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int x1,x2,x3,y1,y2,y3,i,gcd;
    cout<<"x1,y1: ";
    cin>>x1 >> y1;
    cout<<"x2,y2: ";
    cin>>x2 >> y2;
    x3=(x1*y2)+(x2*y1);
    y3=y1*y2;
    for (i=1;i<=x3 && i<=y3;++i){
        if(x3%i==00 && y3%i==0)
        gcd=i;
    }
    cout<<"The fraction is "<< x3/gcd<<"/"<<y3/gcd;
    cout<<endl;
    return 0;
}