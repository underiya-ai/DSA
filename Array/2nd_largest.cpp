#include<iostream>
using namespace std;


int main(){
    int first = INT8_MIN;
    int second = INT8_MIN;


    int arr[] = {2,6,3,9,5,7};
    int size = sizeof(arr)/sizeof(arr[0]);


    for(int i=0; i<size; i++){

        if(arr[i]>first){

          first=arr[i];

        }

    }
    cout<<"first largest number : "<<first<<endl;

    for(int i=0; i<size; i++){

        if(arr[i]!=first && arr[i]>second){
            second = arr[i];
            
        }
    }

    cout<<"second largest no :"<<second;

   


}