#include<iostream>
using namespace std;

int sumofn(int n){
  int sum=0;
  for(int i=0; i<=n; i++){
    sum=sum+i;
  }
  return sum;
}

int main(){

    int arr[]={1,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int arrsum=0;
    for(int i=0; i<size-1; i++){
         
        arrsum=arrsum+arr[i];
    }
    int sum = sumofn(size);
    cout<<"missing element in array :"<<sum-arrsum;

    return 0;
}