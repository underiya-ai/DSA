#include<iostream>
using namespace std;

int count_occurence(int arr[],int size,int x){
    int count=0;  

    for(int i=0; i<size; i++){
        if(arr[i]==x){
            count++;
        }
    }

    return count;

    }

int main(){
    
    int arr[]= {2,3,6,2,7,9,2,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    int x=2;
    
    int total_count = count_occurence(arr,size,x);

    cout<<"total count is : "<<total_count;

}