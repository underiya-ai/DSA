#include<iostream>
using namespace std;

int fact(int num){
    int fact =1;

    for(int i=num; i>0; i--){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int n;
    cout<<"enter no :";
    cin>>n;
    int ans=0,num=n;


    while(n>=5){
        n=n/5;
        ans=ans+n;
    }

    cout<<"factorial is: "<<fact(num)<<endl;
    cout<<"no of zeros is : "<<ans<<endl;
    
}