#include<iostream>
using namespace std;


int main(){

    int arr[]={12,34,67,90};
    int size = sizeof(arr)/sizeof(arr[0]);

    int str = 90;  // max  starting 90 se hoga 
    int end = 203; // end sumation of all pages 
    
    int ans=0;
    int M=2;

    //  mera answer nahi nikal rhaa toh mai right side ko jump kar rhaa hu  and Agar mera answer nikal gyaa hai toh mai left side ko jump kar jaarhaa hu but ans store kraa lenge
    

    while(str<=end){
      int mid = str +(end-str)/2;

    //    main task is  How to distribute pages in among students
      int page = 0,student = 1;

      for(int i=0; i<size; i++){

        page = page + arr[i]; // page distributed agar page jayada ho gaye hai mid value se toh dushre student ko dedoh page yeh niche wali condition hai

        if(page>mid){
          
            student ++; // and joh page  joh bache hai second student ko mil rahe honge 
            page = arr[i];

        }


      }

      if(student<=M){
        ans=mid;
        end=mid-1;
      }
      else{
        str=mid+1;
      }



    }


    // nlog(n) --> time compelexity 
    // Return -1 if a valid assingment is not possible, and allotment should be in contiguous order  ---> which means : like no of bbok 4 diye hue hai and  inh book ko 5 baccho mai batnaa hai M=5 yeh toh inpossible hai naa --> handle it --> if(M>N){return -1}

}