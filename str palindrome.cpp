#include<iostream>
#include<string>
using namespace std;

int main(){
    string str , rev = "";


    cout<<"Enter the string : ";
    cin>>str;


    for(int i = str.length()-1 ; i>=0 ; i--){
        rev+=str[i];
    }

    if (str==rev)
        cout<<"The string is an palindrome.";
    else
        cout<<"The string is not an palindrome.";

    return 0;
}