#include<iostream>
using namespace std;


int main(){

    int arr[]={4,8,1,6,9,2,7};
    int size= sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<size-1; i++){

        int min=i;

        for(int j=i+1; j<size; j++){

            if(arr[j]<arr[min]){
                min=j;
            }


        }

        if(min!=i){
            swap(arr[min],arr[i]);
        }
    }

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

}