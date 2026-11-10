#include<iostream>
using namespace std;

int main(){
    int marks;
    cout<<"Enter marks :";

    cin>>marks;

    if (marks >= 80 && marks <100){
        cout<<"brilliant ";
    }
    else if(marks >=50 && marks<80){
        cout<<"Not Brilliant";
    }
    
    else{
        cout<<"You are more brilliant";
    }

}