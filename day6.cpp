// Write a program to find the Quadrants in which coordinates lie
#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int x,y;
    cout<<"x: ";
    cin>>x;
    cout<<"y: ";
    cin>>y;

    if(x>0&&y>0){
        cout<<"First Quadrant";
    }
    else if(x>0&&y<0){
        cout<<"Fourth Quadrant";
    }
    else if(x<0&&y<0){
        cout<<"Third Quadrant";
    }
    else {
        cout<<"Second Quadrant";
    }
    // else{
    //     cout<<"Invalid numbers";
    // }
    return 0;
}