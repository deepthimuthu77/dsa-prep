#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int i = 1;
        while(i<nums.size()){
            if(nums[i] == nums[i-1]){
                nums[i-1] *= 2; 
                nums[i] = 0;
            }
            i++;
        }
        
        int j = 0;
        for(int num:nums){
            if(num!=0) swap(num,nums[j++]);
        }
        for(int k=j; k<nums.size();k++) nums[k] = 0;

        return nums;
    }
};