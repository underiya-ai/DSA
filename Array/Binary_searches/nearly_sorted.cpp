
//  your array is nearly sorted not completely sorted if given then appy that --> 

//  In completely sorted array mai hum only mid pe check karte hai  but nearly sorted array mai hum sabhi pr check karna hai --> mid pr bhi , mid-1 pr bhi and mid+1 pr bhi check karte hai and lfet mai jaane ke liye --> end=mid-2 karte hai and right mai jaane ke liye str=mid+2 karte hai  bs

#include<iostream>
using namespace std;

int main(){
   
    int arr[]={10,3,40,20,50,80,70};
    int size = sizeof(arr)/sizeof(arr[0]);
    int str=0,end=size-1;
    int key=70;
    int index=-1;

    while(str<=end){

        int mid= str+(end-str)/2;

        if(arr[mid]==key){
            index=mid;
            break;
        }
        else if(mid-1>=str && arr[mid-1]==key){
            index=mid-1;
            break;
        }
        else if(mid+1<=end && arr[mid+1]==key){
            index=mid+1;
            break;
        }
        else if(arr[mid]>key){
            end=mid-2;
        }
        else{
            str=mid+2;
        }
    }

    return index;
}