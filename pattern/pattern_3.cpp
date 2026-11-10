#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter number:";
    cin>>n;

    for(int i =1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int k=1; k<=i; k++){
            cout<<i;
        }
        cout<<endl;
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int k=1; k<=i; k++){
            cout<<k;
        }
        cout<<endl;
    }

    cout<<"For Character "<<endl;

    for(int i=1; i<=n; i++){
        
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(char k='A'; k<='A'+(i-1); k++){
            cout<<k;
        }
        cout<<endl;
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int k=i; k>=1; k--){
            cout<<k;
        }
        cout<<endl;
    }
    cout<<" Pattern printing"<<endl;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int k=1; k<=i; k++){
            cout<<"*";
        }
        for(int l=1; l<=i-1; l++){
            cout<<"*";
        }
        cout<<endl;
    }

    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n-i; j++){
    //         cout<<" ";
    //     }
    //     for(int k=1; k<=2*i-1; k++){
    //         cout<<"* ";
    //     }

    //     cout<<endl;
    //     }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int k=1; k<=i; k++){
            cout<<k;
                }
                for(int l=i-1; l>=1; l--){
                    cout<<l;
                }
                cout<<endl;
    }

    //  most important pattern 

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i-1; j++){
            cout<<" ";
        }for(int k=1; k<=n-i+1; k++){
            cout<<"*";
        }
        for(int l=1; l<=n-i; l++){
            cout<<"*";
        }
        cout<<endl;
    }

}