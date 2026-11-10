#include<iostream>
using namespace std;

int main(){
    int package;
    cin>>package;

    if(package<10){
        cout<<"Yes, You are the best in your field";

    }
    else if(package>10) {
           cout<<"you are awesome";
    }

    else{
        cout<<"you are not eligible";
    }

    return 0;
}
