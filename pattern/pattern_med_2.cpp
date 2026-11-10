#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n :";
    cin>>n;
//  Q --> 1
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout<<"*"<<" ";
            
        }
        cout<<endl;
        
    }
//  Q --> 2
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
 
    for(int i=1; i<=n; i++){
        for(int j=n; j>=n-i+1; j--){
             cout<<j<<" ";
        }
        cout<<endl;
    }

}
//  Q-->1
// * * * * * 
// * * * * 
// * * * 
// * * 
// * 

//  Q --> 2
// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1 