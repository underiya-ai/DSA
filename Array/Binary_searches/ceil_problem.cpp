
// ceil ka matlab hai ---> smallest element but greatest then 5 --> 8 is the ceil of 5

// which means that given X element se bdaa hi honaa chiaye 


#include<iostream>
using namespace std;

int main(){
   int arr[]={1,2,3,4,8,10,10,12,19};
   int size = sizeof(arr)/sizeof(arr[0]);
   int str=0, end=size-1;
   int key=5;
   int ans=-1;

   while(str<=end){

         int mid = str + (end-str)/2;

         if(arr[mid]==key){

            ans=arr[mid];
            return ans;

         }

         else if (arr[mid]>key){

            ans=arr[mid];
            end=mid-1;
         }

         else{
            str=mid+1;
         }
   }

   return ans;
}
