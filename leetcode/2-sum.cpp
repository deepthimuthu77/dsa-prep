#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> prevMap; // {value, index}

        for(int i=0; i<nums.size(); i++){
            int diff = target - nums[i];
            if(prevMap.count(diff)) return {prevMap[diff], i}; // if already exists, return the two indices
            prevMap[nums[i]] = i;
        }

        return {-1,-1};
    }
};