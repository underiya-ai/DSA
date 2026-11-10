#include<iostream>
using namespace std;


int main(){

    int arr[]={2,3,4,7,11,12};
    int size = sizeof(arr)/sizeof(arr[0]);

    int k=5,ans,str=0,end=size-1;

    while(str<=end){
        
        int mid = str+(end-str);
        if(arr[mid]-mid-1>=k){
            ans=mid;
            end=mid-1;
        }
        else {
            str = mid+1;
        }
    }

    return ans+k;
}