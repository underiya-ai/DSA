#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter number to check is prime or not :";
    cin>>n;

    if(n<2){
        cout<<"not prime";
        return 0;
    }
    else{
        for(int i=2; i<n; i++){
            if(n%i == 0){
                cout<<" Not prime number";
                return 0;
            }
            
        }
        cout<<"prime";
    }
    return 0;
}