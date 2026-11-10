#include<iostream>
using namespace std;

int main(){
    int ans = INT8_MAX;
    int arr[] = {2,4,5,7,9};
    int size= sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<size; i++){
        if(arr[i] < ans){
            ans=arr[i];
        }
    }

    cout<<"smallest value is : "<<ans;
    return 0;
}