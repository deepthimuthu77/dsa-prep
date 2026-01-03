#include <iostream>
#include <climits>
using namespace std;

// Print array
void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Update array
void update(int arr[], int n) {
    cout << "\nInside the function" << endl;

    // updating array's first element
    arr[0] = 120;

    // printing the array
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Going back to main function" << endl;
}

// Linear search
bool search(int arr[], int size, int key) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == key) {
            return true;
        }
    }
    return false;
}

// Get minimum
int getMin(int num[], int n) {
    int mini = INT_MAX;
    for(int i = 0; i < n; i++) {
        mini = min(mini, num[i]);
    }
    return mini;
}

// Get maximum
int getMax(int num[], int n) {
    int maxi = INT_MIN;
    for(int i = 0; i < n; i++) {
        maxi = max(maxi, num[i]);
    }
    return maxi;
}

// Reverse array
void reverseArray(int arr[], int n) {
    for(int i = 0; i < n / 2; i++) {
        swap(arr[i], arr[n - i - 1]);
    }
}

int main() {

    int arr[3] = {1, 2, 3};
    update(arr, 3);

    cout << "\nPrinting in main function" << endl;
    printArray(arr, 3);

    int arr2[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};

    cout << "Enter the element to search for: ";
    int key;
    cin >> key;

    if(search(arr2, 10, key)) {
        cout << "Key is present" << endl;
    } else {
        cout << "Key is absent" << endl;
    }

    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int num[100];  // acceptable for basic learning

    for(int i = 0; i < size; i++) {
        cin >> num[i];
    }

    cout << "Maximum value is " << getMax(num, size) << endl;
    cout << "Minimum value is " << getMin(num, size) << endl;

    int nums[] = {1,2,3,4,5,6,7,8,9};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    cout << "Original array:" << endl;
    printArray(nums, numsSize);

    reverseArray(nums, numsSize);

    cout << "Reversed array:" << endl;
    printArray(nums, numsSize);
    

    return 0;
}