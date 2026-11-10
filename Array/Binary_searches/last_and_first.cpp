#include<iostream>
using namespace std;

int main(){

    int arr[]={1,2,4,4,4,4,5,6,16,19,25,55};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target=4;
    int str=0,end=size-1,mid,first=-1,last=-1;

    while(str<=end){

        mid = str+(end-str)/2;

        if(arr[mid]==target){
            first = mid;
            end = mid-1;

        }

        else if(arr[mid]<target){
            str = mid+1;
        }else{
            end = mid-1;
        }
    }


    while(str<=end){

        mid = str+(end-str)/2;

        if(arr[mid]==target){
            last = mid;
            str = mid+1;

        }

        else if(arr[mid]<target){
            str = mid+1;
        }else{
            end = mid-1;
        }
    }
}