#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int even = 0 , odd = 0;

    while(n>0){

        int digit = n % 10;

        if(digit % 2 == 0 )
            even++;
        else
            odd++;
        
        n = n / 10;
    }

    cout<<"Even Digits :"<<even;
    cout<<"\nOdd Digits :"<<odd;

    return 0;
}