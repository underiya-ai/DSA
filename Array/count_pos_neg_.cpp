#include<iostream>
using namespace std;


int main(){
    int arr[]={2,7,1,3,9,6,17,-4,-8,-1,0,0,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    
    int pos_count=0,neg_count=0,zero_count=0;

    for(int i=0; i<size; i++){

        if(arr[i]>0){
            pos_count++;
        }
        else if(arr[i]<0){
            neg_count++;
        }
        else{
            zero_count++;
        }
    }

    cout<<"pos count :"<<pos_count<<endl;
    cout<<"neg count: "<<neg_count<<endl;
    cout<<"zero count:"<<zero_count<<endl;
}