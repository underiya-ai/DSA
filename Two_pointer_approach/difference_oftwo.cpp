
#include<iostream>
using namespace std;
// first we need to sort the array first;
int main(){

    int arr[] = {2,3,5,10,50,80};
    int size = sizeof(arr)/sizeof(arr[0]);

    int str=0,end=1;
    int target=45;

    // first we need to sort the array 
    //  yeh loop kab tak chalegaa --> jab end ki value less then hai sizeof arraya se 
    // ishmai end wala increae karenge toh Answer bhi increase hoga aur agra decreae karna hai toh str ko increase karenge --> yhaa end aur  str ek hi direction mai jayenge 
    while(end<size)
    {
     if(arr[end]-arr[str] == target)
     {

      return 1;

     }
     else if (arr[end]-arr[str]>target)
    //  agar arr[end]-arr[str] badi hai target se toh hame answer tak lejana hai naa str++ jishe value choti ho jaye target ke pass pahuche 
     {
        str++;
     }
     else {
        end++;
     }

    }

    return -1;
}