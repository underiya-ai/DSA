#include<iostream>
using namespace std;

int main(){

    // ishka main logic yeh hai ki humein ek sorted array diya gaya hai jismein har element 2 baar aata hai except for one element jo sirf 1 baar aata hai. Humein us single element ko find karna hai.
    // isko hum binary search ke through karenge.
    // main point hai after finding mid check mid+1 and mid-1 element if left elemnt is same  then single element is an left side of mid because left side will have odd number of elemnts and right side will have even number of elements and vice versaa

    // if mid is even then left and right elemnet also will be even and if mid is odd then left and right elemnt will be odd no of elements

    // 3 steps --> to check mid is even or odd jishse ptaa chal jayegaa ki left and right even hai or odd hai and then check left side se match kar rhaa hai yaa right side se match kar rhaa hai  which means answer bhi left side mai hi hogaa agar right side se match kar rhaa hai toh answer bhi right side mai hogaa 

    // now agar mid is odd then left side mai and right side mai odd number of elemnt honge then left and right  se match dekhenge ki agar left mai match hua toh answer right mai hogaa ulta hai ishmai agar right se match kar rhaa hai toh answer left mai hogaa


    int arr[] = {1,1,2,3,3,4,4,5,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int mid,str=0,end=n-1;

    if (n==1){

        cout<<"single element is :"<<arr[0]<<endl;
    }

    while(str<=end){

        mid = str+(end-str)/2;

        if(mid==0 && arr[0]!=arr[1]) {
            return arr[mid]; //this is end condition if single elemnt is at the start or end of the array

        }

        if(mid==n-1 && arr[n-1]!=arr[n-2]) {
            return arr[mid]; //this is end condition if single elemnt is at the start or end of the array

        }

        if(arr[mid-1] != arr[mid] && arr[mid+1] != arr[mid]){

            cout<<"single element is :"<<arr[mid]<<endl;
        }

        if(mid%2==0){

            if(arr[mid] == arr[mid-1]){

                end=mid-1;
            }
            else{
                str=mid+1;
            }
        }

        else{

            if(arr[mid] == arr[mid-1]){
                str=mid+1;
            }
            else{
                end=mid-1;
            }
        }
    }

}