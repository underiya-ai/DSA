#include<iostream>
using namespace std;


int main(){

    int even_count=0,odd_count=0;
    int arr[] = {3,6,2,8,9,5,4,12};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<size; i++){
        if(arr[i]%2==0){
            even_count++;
        }else{
            odd_count++;
        }
    }

  cout<<"even number:"<<even_count<<endl;
  cout<<"odd number:"<<odd_count<<endl;

  return 0;
}