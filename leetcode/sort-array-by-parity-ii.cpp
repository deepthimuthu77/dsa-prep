#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int i = 0, j = 1;
        while(i<nums.size() && j<nums.size()){
            if (nums[i]%2 == 0){
                i+=2; continue;
            }
            if(nums[j]%2 != 0){
                j+=2; continue;
            }

            if((nums[i]%2 != 0 && nums[j]%2 == 0) || (nums[j]%2 == 0 && nums[i]%2 != 0)){
                swap(nums[i], nums[j]);
                i+=2, j+=2;
                continue;
            }
        } 
        return nums;
    }
};