#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;

    int arr[n];

    cout<<"Enter elements for array insertion :\n";
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    int min = arr[0];

    for (int i=1; i<n; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }


    cout<<"Max element in the array is :"<<min;
    return 0;
}