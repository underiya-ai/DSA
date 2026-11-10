#include<iostream>

// floor matlab --> niche ka element jo given element se chota hai 

// ceil matlab --> upar ka elemnt 


//  but what do you mean by floor of 5 in binary search --> greatest element smalller than 5 --> 1,2,3,4 and which is greatest among them --> 4 is the floor of 5 


// ceil ka matlab hai ---> smallest element but greatest then 5 --> 8 is the ceil of 5

using namespace std ;

int main(){

    int arr[]={1,2,3,4,8,10,10,12,19};
    int size = sizeof(arr)/sizeof(arr[0]);
    int str=0, end=size-1;
    int key=5;
    int ans;

    while(str<=end){

        int mid = str + (end-str)/2;
        
        if(arr[mid]==key){
            
            ans=arr[mid];
            return ans;
        }
        else if(arr[mid]>key){

            end=mid-1;
        }
        else{

             ans = arr[mid];
            str=mid+1;
        }
    }
}