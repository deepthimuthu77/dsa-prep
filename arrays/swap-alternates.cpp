#include<bits/stdc++.h>
using namespace std;

void swap_alt(vector<int> &vec){
    int n = vec.size();
    for(int i=0; i+1<n; i = i+2){
        swap(vec[i], vec[i+1]);
    }
}

int main(){
    vector<int> vec = {1,2,3,4,5,6,7,8,9};
    cout << "Original array: ";
    for(int num : vec){
        cout << num << "  ";
    }
    cout << endl;
    swap_alt(vec);
    cout << "Swapped array: ";
    for(int num : vec){
        cout << num << "  ";
    }
    cout << endl;
    return 0;
}