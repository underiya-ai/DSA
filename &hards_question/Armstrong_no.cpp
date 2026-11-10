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
bool isarmstrong(int n,int digit){

    int ans=0,rem,num=n;

    while(n>0){
        rem=n%10;
        n=n/10;

        ans = ans + round(pow(rem,digit));
    }
    cout<<ans<<endl;

    if(ans==num){
        return 1;
    }else{
        return 0;

    }
          
}

int main(){
    int n;
   cout<<"enter number to check armstrong or not :";
   cin>>n;

   int digit = countdigit(n);
   
   cout<<isarmstrong(n,digit);
}
