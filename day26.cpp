// Write a program to calculate Maximum number of handshakes
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num,shake;
    cout<<"Enter the number of persons in the room: ";
    cin>>num;
    shake=num*(num-1)/2;
    cout<<"The maximum number of handshakes are "<<shake;
    return 0;
}