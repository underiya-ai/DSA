#include<iostream>
using namespace std;

int main(){
    int first_largest = INT8_MIN;
    int second_largest = INT8_MIN;

    int arr[] = {2,6,9,4,8,1,25,79};
    int size = sizeof(arr)/sizeof(arr[0]);

    int ans;

    for(int i=0; i<size; i++){

        if(arr[i]>first_largest){

            first_largest=arr[i];

            

            

        }
    }

    for(int i=0; i<size; i++){
        
        if(arr[i]!=first_largest && arr[i]>second_largest){
                second_largest=arr[i];
            }
    }

    cout<<"second largest number is :"<<second_largest;

    return 0;


}