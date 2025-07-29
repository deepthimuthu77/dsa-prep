#include<bits\stdc++.h>
using namespace std;

/*
ALGORITHM:
1. 
*/

void selection_sort(int arr[], int n){
    for(int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for(int j = i ; j < n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
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

    selection_sort(arr, n);

    cout << "SORTED ARRAY: " << endl;
    for(int i = 0; i <= n-1; i++){
        cout << arr[i] << " ";
    }

    return 0;
}