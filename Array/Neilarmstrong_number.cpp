#include<iostream>
#include<cmath>
using namespace std;


int find_digit(int x){
    int count=0;
    while(x>0){
        count++;
        x=x/10;
    }

    return count;
}

int Armstrongno(int num , int digit){
    int rem,result=0;
    

    while(num>0){
        rem = num % 10;
        num = num/10;
        
        result = result + round(pow(rem,digit));

        
    }

    return result;

}

int main(){
    int x;
    cout<<"enter number to check number is armstrong or not:";
    cin>>x;

    int digit = find_digit(x);
    int Arms_no = Armstrongno(x,digit);

    if(x==Arms_no){
        cout<<"it is armstrong no :";
    }else{
        cout<<"it is not armstrong no";
    }

    
}