#include<iostream>
using namespace std;


int main(){
    int arr[]={5,10,30,20,15};
    int size = sizeof(arr)/sizeof(arr[0]);
    int str=0, end=0;
    int M=3,ans;
    for(int i=0; i<size; i++){
       str=max(str,arr[i]);
       end += arr[i];
    }

    while(str<=end){
        int mid = str + (end-str)/2;

        int wall=0,painter=1;

        for(int i=0; i<size; i++){
            wall += arr[i];

            if(wall>mid){
                painter++;
                wall=arr[i];
            }
        }

        if(painter<=M){
          ans=mid;
          end=mid-1;
        }

        else {
            str=mid+1;
        }

        

        

    }
    
}