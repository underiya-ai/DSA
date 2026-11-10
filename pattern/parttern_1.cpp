#include<iostream>
using namespace std;

int main(){
    for(int i=1; i<=5; i++){
        
        for(int j=1; j<=5; j++){
            cout<<"*"<<" ";
        }

        cout<<endl;
    }

    for(int k=1; k<=5; k++){
        for(int l=1; l<=5; l++){
            cout<<"10"<<" ";
        }
        cout<<endl;
    }

    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            cout<<j<<" ";
        }

        cout<<endl;
    }

    for(int i=1; i<=5; i++){
        for(int j=5; j>0; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    for(int i=1; i<=5; i++){
        for(int j =1; j<=5; j++){
            cout<<j*j<<" ";
        }
        cout<<endl;
    }

    for(char i='a'; i<='e'; i++){
        for(int j=1; j<=5; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    for(int i=1; i<=5; i++){
        for(char j ='a'; j<='e'; j++){
            cout<<j<<" ";

        }
        cout<<endl;
    }
    int count = 1;
    for(int i=1; i<=5; i++){
         
        for(int j=1; j<=5; j++){
            
            cout<<count<<" ";
            count ++;
        }
        cout<<endl;    
    }
}