#include<iostream>
using namespace std;


void ReverseArray(int arr[], int size){

    int str=0,end=size-1;

    while(str<end){
        swap(arr[str],arr[end]);
        str++;
        end--;
    }

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={1,2,3,4,5,6,7,9};
    int size = sizeof(arr)/sizeof(arr[0]);

    ReverseArray(arr,size);
}