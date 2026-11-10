#include<iostream>
using namespace std;

int main(){
    int arr[]={2,4,6,7,8,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target=7;
    int index=-1;

    for(int i=0; i<size; i++){
        if(arr[i]==target){
            index=i;
            cout<<"array element is :"<<arr[i]<<endl;
            cout<<"index is : "<<index;
        }
    }
    
    return 0;
    
}