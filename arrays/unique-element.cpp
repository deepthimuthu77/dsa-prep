#include<bits/stdc++.h>
using namespace std;

// brute force
// int unique_elt(vector<int>& vec) {
//     int n = vec.size();
//     for (int i = 0; i < n; i++) {
//         bool unique = true;
//         for (int j = 0; j < n; j++) {
//             if (i != j && vec[i] == vec[j]) {
//                 unique = false;
//                 break;
//             }
//         }
//         if (unique) return vec[i];
//     }
//     return -1;
// }

// optimal
int unique_elt(vector<int>& vec) {
    int ans = 0;
    for(int num : vec){
        ans ^= num;
    }
    return ans;
}


int main(){
    vector<int> vec = {1,2,4,2,1};
    int uni = unique_elt(vec);
    cout << "Unique element: " << uni;
    return 0;
}