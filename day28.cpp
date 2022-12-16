// Write a Program to reverse a string.
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     char str;
//     cout<<"Enter a string: ";
//     cin>>str;
   
//     cout<<"The reverse of the string is "<<strrev(str); 
    
//     return 0;
// }
#include<iostream>
#include<cstring>
using namespace std; 
int main() 
{ 
    char str[] ="Journal Dev reverse example"; 
    strrev(str);
	cout<<"\n"<<str; 
    return 0;
}