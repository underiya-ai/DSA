//  find trailling zero in the factorial

#include<iostream>
#include<cmath>
using namespace std;


int fact_no(int num){
       int fact=1;
    for(int i=num; i>0; i--){
        fact=fact*i;
    }
    return fact;
}

int count_digit(int fact_no){
    int rem,count=0;
    while(fact_no>0){
        
        rem=fact_no%10;

        if(rem==0){
           count++;
        }

        fact_no=fact_no/10;
        
    }
    return count;
}

int main(){
    int n;
    cout<<"enter number:";
    cin>>n;

    int factorial = fact_no(n);

    cout<<"factorial is : "<<factorial<<endl;

    cout<<"total no of zeros : "<<count_digit(factorial);

}