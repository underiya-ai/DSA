
#include<iostream>
using namespace std;

//  this technique only used in sorted array
int main(){
    int arr[]={2,7,11,15,27};
    int size = sizeof(arr)/sizeof(arr[0]);

    int str =0,end=size-1;
    int target=22;
    int index_1=-1,index_2=-2;

    while(str<end){

       if(arr[str]+arr[end] ==  target){

           index_1=str;
           index_2=end;

           
       }

       else if(arr[str]+arr[end]>target){

            //   agar str value and end value target se jayada aarahe hai + add karne pr then  end --
            
            end--;
       }

       else{

          str++;

       }
    }
}