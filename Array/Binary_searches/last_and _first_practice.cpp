#include<iostream>
using namespace std;

int main(){

    int arr[]={2,4,10,10,10,18,20};

    int size = sizeof(arr)/sizeof(arr[0]);
    int ans=-1;
    int target = 10;

    int str=0,end=size-1;

    while(str<=end){
        
        int mid= str+(end-str)/2;

        if(arr[mid]==target){
            ans=mid;
            end=mid-1;
            
        }
        else if(arr[mid]<target){
            str=mid+1;
        }
        else{
            end=mid-1;
        }

    }

    while(str<=end){
        int mid=str+(end-str)/2;

        if(arr[mid]==target){
            ans=mid;
            str=mid+1;
        }
        else if(arr[mid]<target){
            str=mid+1;
        }else{
            end=mid-1;
        }

    }

}