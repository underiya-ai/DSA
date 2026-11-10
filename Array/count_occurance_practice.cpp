#include<iostream>
using namespace std;

int CountOcurrence(int arr[], int size, int x){
    int count =0;
    for(int i=0; i<size; i++){
        if(arr[i]==x){
            count++;
        }


    }

    return count;
}

int main(){
    
    int arr[] = {3,2,4,7,1,8,2,6,2,1,2};
    int size = sizeof(arr)/sizeof(arr[0]);

    int x =2;

    int total_count = CountOcurrence(arr,size,x);

    cout<<"the total occurence of element x is :"<<total_count;


    
}