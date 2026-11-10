#include<iostream>
using namespace std;

int main(){
    
    for(char i ='a'; i<='z'; i++){
        cout<<i<<endl;
    }
    
    for(int i=10; i>=1; i--){
        cout<<i<<endl;
    }
    
    for(int i=1; i<=100; i=i+3){
        cout<<i<<" "<<endl;
    }
    for(int i=1; i<=10; i++){
        cout<<6*i<<""<<endl;
    }
    // power ka code 
    int n,pow;
    cout<<"Enter the number:";
    cin>>n;
    cout<<"enter pow:"<<endl;
    cin>>pow;
    int num = n;
    for(int i=1; i<pow; i++){
        num = num*n;
         
        
    }
   
    
    




}