#include<iostream>
#include<cmath>
using namespace std;



int countdigit(int num){

    int count=0;
    while(num>0){

        count++;
        num=num/10;

    }
    
    return count;
}

bool isarmstrong(int num , int digit){
  
    int n=num,ans=0,rem;

    while(num>0){

        rem=num%10;
        num=num/10;

        ans = ans + round(pow(rem,digit));

    }
    cout<<ans<<endl;

    if(n==ans){
        return 1;
    }else{
        return 0;
    }


}


int main(){

   int n;
   cout<<"enter number:";
   cin>>n;

   int digit = countdigit(n);
   cout<<isarmstrong(n,digit);


}