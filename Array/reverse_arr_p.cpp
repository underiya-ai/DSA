#include<iostream>
using namespace std;

// reverse an array:

int main(){

    int arr[]={2,3,5,8,9,20,22};
    int size = sizeof(arr)/sizeof(arr[0]);
    int i=0,j=size-1;

    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }


}