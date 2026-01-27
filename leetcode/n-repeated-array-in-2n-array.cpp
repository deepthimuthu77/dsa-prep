#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        if (nums[0] == nums.back() || nums[0] == nums[1]) return nums[0];
        for (int i = 2; i < nums.size(); i++)
            if (nums[i] == nums[i-1] || nums[i] == nums[i-2]) return nums[i];
        return -1;
    }
};
