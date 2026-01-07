#include<bits/stdc++.h>
using namespace std;

// brute force O(n^2)
// int duplicate_elt(vector<int> vec){
//     for(int num : vec){
//         for(int digit : vec){
//             if(num == digit) return num;
//         }
//     }
//     return -1;
// }

int duplicate_elt(vector<int> vec){
    int ans = 0;
    for(int num : vec){
        ans ^= num;
    }

    for(int i =1; i< vec.size(); i++){ // to isolate dupl number in the range 1 to n-1
        ans^=i;
    }
    return ans;
}

int main(){
    vector<int> vec = {1, 2, 2, 3, 4}
;
    int dup = duplicate_elt(vec);
    cout << "Duplicate element: " << dup;
    return 0;
}