#include<bits\stdc++.h>
using namespace std;

/* ALGORITHM:
Step 1 − Start from the 0th index of the input array, compare the key value with the value present in the 0th index.

Step 2 − If the value matches with the key, return the position at which the value was found.

Step 3 − If the value does not match with the key, compare the next element in the array.

Step 4 − Repeat Step 3 until there is a match found. Return the position at which the match was found.

Step 5 − If it is an unsuccessful search, print that the element is not present in the array and exit the program.
*/

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

    // Linear / Sequential Search
    for (int i = 0; i < n; i++){
        if (arr[i] == search){
                cout << "Element found at index " << i;
                return 0;
        }
    }
    cout << "Element not found.";
    return 0;
}