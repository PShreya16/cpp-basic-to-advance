// Write a Program to concatenate a string.
// #include<iostream>
// using namespace std;
// int main(){
//     char str,str1,result;
//     cout<<"Enter a string: "<<endl;
//     cin>>str;
//     cout<<"Enter another string: "<<endl;
//     cin>>str1;
//     result=str+str1;
//     cout<<"The concatenatead string is "<<result;
//     return 1;
// }
#include <iostream>  
using namespace std;  
int main ()  
{  
    string str1, str2; // declare string variables  
      
    cout << " Enter the first string: ";  
    cin >> str1;  
      
    cout << "\n Enter the second string: ";  
    cin >> str2;  
      
    // use '+' operator to concatenate the str1 and str2  
    string result = str1 + str2;  
    cout << " The concatenated string " << str1 << " and " << str2 <<" is: " << result;  
    return 0;  
}     