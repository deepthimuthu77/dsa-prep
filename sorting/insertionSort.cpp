#include<bits\stdc++.h>
using namespace std;

/* ALGORITHM:
-----------------------------------------------------------------------------
1 − If it is the first element, it is already sorted. return 1;
2 − Pick next element
3 − Compare with all elements in the sorted sub-list
4 − Shift all the elements in the sorted sub-list that is greater 
    than the value to be sorted
5 − Insert the value
6 − Repeat until list is sorted
-----------------------------------------------------------------------------
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
    cout << "Enter the elements: \n";
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