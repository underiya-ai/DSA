#include<iostream>
using namespace std;

//  find the first index of 1 in infinite sorted array -->

// How to break the problem statement binary --> what given right --> sorted array --> toh binary search first occurence nikal naa  hai toh --> first occurence wala concept and + infinite wala concept 
int main(){

    int arr[]={0,0,0,0,1,1,1,1,1,1}; //infinite tak 
    int size = sizeof(arr)/sizeof(arr[0]);

    int key=1;
    int str=0,end=1; // end=1 due to infinite sorted array
    int ans;
//  due to infinite
    while(key>arr[end]){
        str=end;
        end=end*2;
    }

    while(str<=end){

        int mid = str + (end-str)/2;

        if(arr[mid]==key){
            
           ans=arr[mid];
          
           end=mid-1;  
            
        }

        else if(arr[mid]<key){
            str =mid+1;
        }else{
            end=mid-1;
        }
    }

    return ans;

}