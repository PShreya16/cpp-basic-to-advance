// Write a program to find roots of a quadratic equation
#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main(){
    int a,b,c,discriminant,x1,x2;
    cout<<"Enter the values of a,b,c: ";
    cin>>a>>b>>c;
    discriminant=b*b-4*a*c;
    x1 = (-b + sqrt(discriminant)) / (2*a);
    x2 = (-b - sqrt(discriminant)) / (2*a);
    if (discriminant==0){
        cout<<"Roots are equal"<<endl;
        cout<<"x1=x2: "<<x2;
    }
    else if (discriminant>0){
        cout<<"x1:"<<x1<<endl;
        cout<<"x2="<<x2;
    }
    else{
        cout<<"x1:"<<x1<<endl;
        cout<<"x2: "<<x2;

    }
return 0;
}