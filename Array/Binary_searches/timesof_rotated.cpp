#include<iostream>
using namespace std ;

// How many times a sorted array is rotated
int main(){

    int arr[]={4,6,8,10,1,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    int str=0,end=size-1;
    int index=-1;


    while(str<=end){

       
        // if aray already sorted then return the first index
        
        if (arr[str]<=arr[end]){

            index=str;
            break;
        }

        int mid= str+(end-str)/2;

        if(arr[str]<=arr[mid]){

            str=mid+1;
        }
        else{

            index=mid;
            end=mid-1;
        }
    }

    return index;
}