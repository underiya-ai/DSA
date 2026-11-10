#include<iostream>
using namespace std;


int main(){
    int arr[]={8,3,9,1,6,3,5,4};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<size; i++){

        int min=i;

        for(int j=0; j<size; j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }

        if(arr[min]!=i){
            swap(arr[min],arr[i]);
        }
    }
}