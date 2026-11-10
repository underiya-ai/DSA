#include<iostream>
using namespace std;

int main(){
    int n,sum=0,digit;
    cout<<"enter number to find sum of its digit:";
    cin>>n;

    while(n>0){
        digit=n%10;
        n=n/10;
        sum+=digit;

    }
    cout<<"the sum of digit :"<<sum;
}
