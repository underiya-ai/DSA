#include<iostream>

using namespace std;

int main(){
    int arr[]={4,5,6,7,0,1,2};
    int size = sizeof(arr)/sizeof(arr[0]);

    int str=0, end=size-1;
    int target=6;

    while(str<=end){

        int mid=str+(end-str)/2;

        if(arr[mid]==target){
             return mid;
        }

       else if(arr[0]<arr[mid]){
            
            if(arr[str]<=target && target<=arr[mid]){
                end=mid-1;
            }else {
                str=mid+1;
            }
        }
        else{
            
            if(arr[mid]<=target && target<=arr[end]){
                str=mid+1;
            }else {
                end=mid-1;
            }

        }
    }
}