#include<bits\stdc++.h>
using namespace std;

/* ALGORITHM:
-----------------------------------------------------------------------------
1 − Check if the first element in the input array is greater than the next 
    element in the array.
2 − If it is greater, swap the two elements; otherwise move the pointer 
    forward in the array.
3 − Repeat Step 2 until we reach the end of the array.
4 − Check if the elements are sorted; if not, repeat the same process 
    (Step 1 to Step 3) from the last element of the array to the first.
5 − The final output achieved is the sorted array. 
-----------------------------------------------------------------------------
*/

void bubble_sort(int arr[], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main(){
    int n;
    cout << "Enter no. of elements: ";
    cin >> n;
    int arr[n];
    for(int i = 0; i <= n-1; i++){
        cin >> arr[i];
    }

    bubble_sort(arr, n);

    cout << "SORTED ARRAY: " << endl;
    for(int i = 0; i <= n-1; i++){
        cout << arr[i] << " ";
    }

    return 0;
}