#include<bits/stdc++.h>
using namespace std;

// hashmap approach
// vector<int> findDuplicates(vector<int>& nums) {
//     unordered_map<int, int> freq;
//     vector<int> ans;
//         for (int x : nums) {
//             freq[x]++;
//             if (freq[x] == 2) {
//                 ans.push_back(x);
//         }
//     }

//     return ans;
// }

vector<int> findDuplicates(vector<int>& nums) {
    vector<int> ans;

    for (int i=0; i<nums.size(); i++){
        int idx = abs(nums[i]) - 1;
        
        if (nums[idx] < 0) ans.push_back(nums[i]);
        else nums[idx] = -nums[idx];

        return ans;
    }
}

int main(){
    
    return 0;
}