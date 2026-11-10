#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 5;
    int low = 0;
    int high = arr.size() - 1;
    int mid;

    while(low <= high){
        mid = (low + high) / 2;
        if(arr[mid] == target){
            cout << "Element found at index: " << mid << endl;
            return 0;
        }
        else if(arr[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    cout << "Element not found" << endl;
    return 0;
}