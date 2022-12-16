#include <iostream>
using namespace std;
 
int main(){
        //Initialiazing variable.
	char str[100];
	int i,length=0;
	//Accepting input.
	cout<<"Enter the string:";
	cin>>str;
	//Initializing for loop.
	for(i=0;str[i]!='\0';++i)
	{
	length++;//Counting the length.
	}
	
	cout<<"Length of the string is:"<<length<<endl;
 
	return 0;
}