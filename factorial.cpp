#include<iostream>
using namespace std;

int main(){
    int n,mul;
    cout<<"enter number:";
    cin>>n;
    mul=1;

    for(int i=1; i<=n; i++){
        mul = mul*i;
    }
    cout<<mul;
}