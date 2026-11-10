#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter binary number:";
    cin>>n;

    int mul=1,ans=0,lastdigit;

    while(n>0){
        lastdigit = n%10;
        n = n/10;
        
        ans = lastdigit*mul + ans;
        
        mul=mul*2;


    }
    cout<<"decimal form is :"<<ans;
    


}