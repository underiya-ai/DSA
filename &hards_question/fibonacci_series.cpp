#include<iostream>
using namespace std;


int main(){
    int n,c;
    cout<<"enter number:";
    cin>>n;
    int a=0,b=1,i;

    if(n<1){
        return 0;
    }

    if(n==1){
        return 1;
    }
    cout<<a;
    cout<<b;
    for(i=2; i<=n; i++){
        c=a+b;
       
        cout<<c;
        // update previous number;
        a=b;
        b=c;
    }

    return c;




}