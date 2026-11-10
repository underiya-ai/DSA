#include<iostream>
using namespace std;

int main(){
  int arr[]={2,4,7,10,8,5};
  int size = sizeof(arr)/sizeof(arr[0]);

  int str =0, end = size-1;

  while(str<=end){

    int mid = str + (end-str)/2;

    if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
        return mid;
    }
    else if (arr[mid-1]<arr[mid]){
        str=mid+1;
    }else {
        end=mid-1;
    }
  }

  return 0;

}