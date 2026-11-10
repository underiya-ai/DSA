#include<iostream>
using namespace std;

int main(){
    int a,b,c,num;
    cout<<"enter number:";
    cin>>num;
     a=0;
     b=1;
     
     int sum = 0;
     for(int i=1; i<=num; i++){
        c = a+b;
        a=b;
        b=c;
        
        
     }
     cout<<"fibonacci no:"<<c;

    return 0;
}