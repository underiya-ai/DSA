#include<iostream>
using namespace std;


int main(){
    int arr[] = {2,4,6,8,10,7,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int str=0,end=size-1,index=-1;

    while(str<=end)
        {

        int mid = str + (end-str)/2;

        if(arr[mid-1]<arr[mid] && arr[mid+1]<arr[mid])
        {
            return mid;
        }
        else if(arr[mid-1]<arr[mid])
        {
             str=mid+1;
        }

        else 

        {
            end=mid-1;
        }

    }

    
}