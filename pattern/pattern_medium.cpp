#include<iostream>
using namespace std;

int main(){
    // 1>
    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
// Q --> 2 
    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
//  Q --> 3

    for(int i =1; i<=5; i++){
        for(int j=1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
        }
//  Q --> 4
    for(int i=1; i<=5; i++){
        for(int j=i; j>=1; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
// Q --> 5
    for(int i=1; i<=5; i++){
        char name = 'a' + (i-1);
        
        for(int j=1; j<=i; j++){
            cout<<name<<" ";
        }
        cout<<endl;
       
    }

}

//  this is the output -->  of above question 
// 1> answer--> output 
// * 
// * * 
// * * * 
// * * * * 
// * * * * * 

// question no --> 2 
// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 

//  Question --> 3
// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5 

//  Q --> 4
// 1 
// 2 1 
// 3 2 1 
// 4 3 2 1 
// 5 4 3 2 1 