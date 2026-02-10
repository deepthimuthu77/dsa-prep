#include<iostream>
#include<vector>
using namespace std;

int BinSearch(vector<int> arr, int low, int high, int key){
    // recursive
    /*
    if(low>high) return -1;
    int mid = low + (high - low) / 2;
    if(arr[mid] == key) return 1;
    else if(arr[mid] < key) BinSearch(arr, mid+1, high, key);
    BinSearch(arr, low, mid-1, key);
    return -1;
    */

    // iterative
    while(low<=high){
        int mid = low + (high - low) / 2;
        if(arr[mid] == key) return 1;
        else if(arr[mid] < key) low = mid+1;
        else high = mid-1;
    } 
    return -1;
}

int main(){
    vector<int> array = {1,2,3,4,5,6,7,8,9};
    int key = 1;

    if(BinSearch(array, 0, array.size()-1, key) == 1){
        cout << "ELEMENT PRESENT";
    } else cout << "ELEMENT ABSENT";
    
    return 0;
}