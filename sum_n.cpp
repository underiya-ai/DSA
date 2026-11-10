#include<iostream>
using namespace std;

int main(){
    // sum of  n natural number 
    int n;
    cout<<"Enter number to find sum:";
    cin>>n;

    cout<<n*(n+1)/2<<endl;
    int sum =0;
    for(int i=1; i<=n; i++){
        sum = sum+i;
    }
    cout<<sum;
    //  dushra formulaa 

    

}