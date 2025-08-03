#include<bits\stdc++.h>
using namespace std;

/* ALGORITHM:
Step 1 − Select the middle item in the array and compare it with the key value to be searched. If it is matched, return the position of the median.

Step 2 − If it does not match the key value, check if the key value is either greater than or less than the median value.

Step 3 − If the key is greater, perform the search in the right sub-array; but if the key is lower than the median value, perform the search in the left sub-array.

Step 4 − Repeat Steps 1, 2 and 3 iteratively, until the size of sub-array becomes 1.

Step 5 − If the key value does not exist in the array, then the algorithm returns an unsuccessful search.
*/

void binary_search(int arr[], int low, int high, int key){
    int mid;
    mid = (low + high) / 2;
    if (low <= high) {
        if (arr[mid] == key)
            cout << "Element found at index: " << mid << endl;
        else if(key < arr[mid])
            binary_search(arr, low, mid-1, key);
        else if (arr[mid] < key)
            binary_search(arr, mid+1, high, key);
        else if (low > high)
    cout << "Unsuccessful Search" << endl;
    }
}

int main(){
    int n, search;
    cout << "Enter no. of elements: ";
    cin >> n;
    int arr[n];
    for(int i = 0; i <= n-1; i++){
        cin >> arr[i];
    }
    cout << "Enter element to search: ";
    cin >> search;

    // Binary Search
    binary_search(arr, 0, n-1, search);

    return 0;
}