#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout<<"*";
        }
        for(int k=1; k<=i-1; k++){
            cout<<" ";
        }
        for(int l=1; l<=i-1; l++){
            cout<<" ";
        }
        for(int m=1; m<=n-i+1; m++){
            cout<<"*";
        }
        
        cout<<endl;
    }
    for(int i=1; i<=n; i++){
         for(int n=1; n<=i; n++){
            cout<<"*";
        }
        for(int o=1; o<=2*(n-i); o++){
            cout<<" ";
        }
        for(int p=1; p<=i; p++){
            cout<<"*";
        }
        cout<<endl;
    }
}

// ********
// ***  ***
// **    **
// *      *
// *      *
// **    **
// ***  ***
// ********