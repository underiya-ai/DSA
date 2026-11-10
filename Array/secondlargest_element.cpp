#include<iostream>
using namespace std;


int SecondLargest(int arr[], int size){
    int first_max = INT8_MIN;
    int second=INT8_MIN;

    for(int i=0; i<size; i++){

        if(arr[i]>first_max){
            first_max = arr[i];
        }
    }

    for(int i=0; i<size; i++){
        if(arr[i]!=first_max && arr[i]>second){
            second = arr[i];
        }
    }

    return second;
}

int main(){
    int arr[]= {3,5,7,1,9,2,6,56,20};
    int size = sizeof(arr)/sizeof(arr[0]);

    int second_largest = SecondLargest(arr,size);

    cout<<"Second largest element is :"<<second_largest;

}