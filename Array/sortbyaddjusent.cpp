#include<iostream>
using namespace std;

int main(){
    int arr[]={4,2,7,8,9,1,10,53};
    int size=sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<size; i++){
        for(int j=0; j<size-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";

    }
}