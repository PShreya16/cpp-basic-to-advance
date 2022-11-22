// Get an input character from the user and give the ASCII value of the given input as the output.
#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    char a;
    cout<<"Input: ";
    cin>>a;
    
    cout<<"ASCII Value of " << a << " is " << int(a);
    return 0;
}