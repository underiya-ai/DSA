#include<iostream>
#include<cmath>
using namespace std;


int main(){

    int arr[]={12,34,67,90};
    int size = sizeof(arr)/sizeof(arr[0]);
    int end=0,str=0;
    int M=2,N=4; // where M is Number of student and N is numbers of books
    

    for(int i=0; i<size; i++){
       str=max(str,arr[i]);
       end +=arr[i];
    }

    while(str<=end){
      
    }

    
}