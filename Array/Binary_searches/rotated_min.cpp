#include<iostream>
using namespace std;


int main(){
    
    int arr[]={4,6,8,10,1,2};
    int size= sizeof(arr)/sizeof(arr[0]);

    int str=0,end=size-1;
    int ans=arr[str];

    while(str<=end){
        // # find array left sorted hai yaa right sorted --> condition
        
        int mid = str+(end-str)/2;

        if(arr[0]<=arr[mid]){
            str = mid+1;
        }else{
            ans=arr[mid];
            end=mid-1;
        }

    }
    return 0;
}