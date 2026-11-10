#include<iostream>
using namespace std;


int Binary_search(int arr[],int size,int target){
//     sorting technique
    for(int i=0; i<size; i++){
        for(int j=0;j<size-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
//  to view array element 
  cout<<"sorted array : ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
 
    //  Binary search element 
    
    int str =0,end=size-1;
     

      while(str<=end){
        int mid = str + (end - str)/2;

       if(arr[mid]==target){
            return mid;
            
        }
        else if(arr[mid]<target){
            str = mid+1;
        }else{
            end = mid-1;
        }
    }

    return -1;
}

int main(){

    int arr[] = {3,7,8,2,6,9,5,12,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 9;
    
    int search = Binary_search(arr,size,target);
    cout<<endl;
    cout<<"the target  index is :"<<search;
   
}