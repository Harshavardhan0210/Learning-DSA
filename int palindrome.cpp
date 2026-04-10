#include<iostream>
using namespace std;
int main(){

    int n, rev = 0;
    cout<<"Enter the number : ";
    cin>>n;

    int original = n;

    while(n!=0){
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    if(rev==original)
        cout<<"The int is palindrome.";
    else
        cout<<"The int is not an palindrome.";
    
        return 0;
}