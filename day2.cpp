// Write a program to identify if the character is an alphabet or not.
//Take an input character from user and check whether it is an alphabet or not.

#include<iostream> 
using namespace std; 
int main() 
{ 
char a; 
cout<<"Enter a character:"; 
cin>>a; 
if((a>='a' && a<='z') || (a>='A' && a<='Z')) 
{ 
cout<<"It is an Alphabet"; 
} 
else{ 
cout<<"Not an Alphabet"; 
} 
return 0; 
}
