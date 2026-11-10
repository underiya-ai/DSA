#include<iostream>
using namespace std;

int main(){
  int  arr[]={1,4,6,8,10,14,16,18};
  int size = sizeof(arr)/sizeof(arr[0]);

  int str=0,end=size-1,target=9,index=size; 

  while(str<=end){
    int mid = str+(end-str)/2;

    if(arr[mid]==target){
        index=mid;
        return mid;
    }

    else if(arr[mid]<target){
        str =mid+1;
    }else{
        index=mid;
        end=mid-1;
    }
  }

}