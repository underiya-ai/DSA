#include<iostream>
using namespace std;



int main(){
    int arr[]={1,7,3,6,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);

    int totalsum=0;
    int rightsum=0,leftsum=0;

    for(int i=0; i<size; i++){
        totalsum+=arr[i];


    }

    for(int i=0; i<size; i++){

        rightsum=totalsum-arr[i];
        
        if(leftsum==rightsum){
            cout<<i;
        }
        else{

            leftsum+=arr[i];
            totalsum-=arr[i];
        }

        return 0;
    }

    //  use screenshot 





}