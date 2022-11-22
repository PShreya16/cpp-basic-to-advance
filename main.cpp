
#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int a,b;
    int n=0;
    string intMap = {"one", "two","three", "four", "five", "six", "seven", "eight", "nine"};
    cin>>a>>b>>endl;


    if((a<=9)&&(b<=9)){
        for(n=a;n<=b;n++){
            cout<<intMap[n-1]<<endl;
        }
    }
    else if((a<=9)&&(b>9)){
        for(n=a;n<=9;n++){
            cout<<intMap[n-1]<<endl;
        }
    }
    else
    return 0;
}