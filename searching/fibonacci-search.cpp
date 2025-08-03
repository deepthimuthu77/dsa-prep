#include<bits\stdc++.h>
using namespace std;

/* ALGORITHM:
Step 1 − As the first step, find the immediate Fibonacci number that is greater than or equal to the size of the input array. Then, also hold the two preceding numbers of the selected Fibonacci number, that is, we hold Fm, Fm-1, Fm-2 numbers from the Fibonacci Series.

Step 2 − Initialize the offset value as -1, as we are considering the entire array as the searching range in the beginning.

Step 3 − Until Fm-2 is greater than 0, we perform the following steps −

    Compare the key element to be found with the element at index [min(offset+Fm-2,n-1)]. If a match is found, return the index.

    If the key element is found to be lesser value than this element, we reduce the range of the input from 0 to the index of this element. The Fibonacci numbers are also updated with Fm = Fm-2.

    But if the key element is greater than the element at this index, we remove the elements before this element from the search range. The Fibonacci numbers are updated as Fm = Fm-1. The offset value is set to the index of this element.

Step 4 − As there are two 1s in the Fibonacci series, there arises a case where your two preceding numbers will become 1. So if Fm-1 becomes 1, there is only one element left in the array to be searched. We compare the key element with that element and return the 1st index. Otherwise, the algorithm returns an unsuccessful search.
*/

int min(int a, int b){
    return (a > b) ? b : a;
}
int fibonacci_search(int arr[], int n, int key){
    int offset = -1;
    int Fm2 = 0;
    int Fm1 = 1;
    int Fm = Fm2 + Fm1;
    while (Fm < n) {
        Fm2 = Fm1;
        Fm1 = Fm;
        Fm = Fm2 + Fm1;
    }
    while (Fm > 1) {
        int i = min(offset + Fm2, n - 1);
        if (arr[i] < key) {
            Fm = Fm1;
            Fm1 = Fm2;
            Fm2 = Fm - Fm1;
            offset = i;
        } else if (arr[i] > key) {
            Fm = Fm2;
            Fm1 = Fm1 - Fm2;
            Fm2 = Fm - Fm1;
        } else
        return i;
    }
    if (Fm1 && arr[offset + 1] == key)
        return offset + 1;
    return -1;
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

    int pos = fibonacci_search(arr, n, search);
    if(pos >= 0)
        cout << "\nThe element is found at index " << pos;
    else
        cout << "\nUnsuccessful Search";

    return 0;
}