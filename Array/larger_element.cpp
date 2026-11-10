#include<iostream>
using namespace std ;

int main(){
    int ans= INT8_MIN;
    int arr[]={3,7,91,2,42,26};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<=size; i++){
        if(arr[i]>ans){
            ans=arr[i];
        }
    }
    cout<<"larger value of arr: "<<ans;
    return 0;
}