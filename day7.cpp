// Write a program to find Number of days in a given month of a given year
#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int year;
    int month = 12;

    // char month;
    cout<< "Enter year:";
    cin>>year;
    cout<< "Enter month:";
    cin>>month;
if(year%4==0 && month==2){
    cout<<"29";
}
else if(year%4!=0 && month==2){
    cout<<"28";
}
else if(month==1){
    cout << "31";
}
else if(month==3){
    cout << "31";
}
else if(month==4){
    cout << "30";
}
else if(month==5){
    cout << "31";
}
else if(month==6){
    cout << "30";
}
else if(month==7){
    cout << "31";
}
else if(month==8){
    cout << "31";
}
else if(month==9){
    cout << "30";
}
else if(month==10){
    cout << "31";
}
else if(month==11){
    cout << "30";
}
else if(month==12){
    cout << "31";
}
else{
    cout << "Invalid timestamp";
}
return 0;
}