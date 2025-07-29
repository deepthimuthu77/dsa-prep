#include<bits\stdc++.h>
using namespace std;

/*
ALGORITHM:
1. 
*/

void insertion_sort(int arr[], int n){
    cout << "Sorting the array.." << endl;
    for(int i = 0; i < n; i++){
        int j = i;
        while(j>0 && arr[j] < arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
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

    insertion_sort(arr, n);

    cout << "SORTED ARRAY: " << endl;
    for(int i = 0; i <= n-1; i++){
        cout << arr[i] << " ";
    }

    return 0;
}