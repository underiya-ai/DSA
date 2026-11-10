#include<iostream>
using namespace std;

//  find minimum element in rotated sorted ar
int main(){

    int arr[]={4,6,8,10,1,2};
    int size = sizeof(arr)/sizeof(arr[0]);

    int str=0,end=size-1;
    int ans=arr[0];

    while(str<=str){

        int mid=str+(end-str)/2;

        if(arr[0]<=arr[mid]){
            str=mid+1;
        }
        else{

            ans=mid;
            end=mid-1;
        }

    }
}