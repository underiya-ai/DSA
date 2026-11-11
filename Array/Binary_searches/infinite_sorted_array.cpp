// find element in infinite sorted array
// we can use binary search to find the element in infinite sorted array
// infinite sorted array mai yeh samaj nahi aarhaa tha ki end khaa rakhe --> end ko  index 1 pr rakhenge  and end=end*2 jab tak jab tak voh key badi hai arrayke elements se  then binary search ka concept lagega

#include<iostream>
using namespace std;

int main(){

    int arr[]={1,2,3,4,5,6,7,8,9,10,12,18,20,29};
    int str=0;
    int end=1;
    int key=7;

    while(key>arr[end]){

        str=end;
        end=end*2;
    }

    while(str<=end)
    {
      int mid = str +(end-str)/2;

      if(arr[mid]==key){
         return mid;
      }

      else if(key>arr[mid]){
        str=mid+1;
      }else{
        end=mid-1;
      }
    }

    return -1;


}