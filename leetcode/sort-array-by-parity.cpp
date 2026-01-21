#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        // 2-pointer approach
        int i=0, j=nums.size()-1;
        while(i<j){
                if(nums[i]%2 == 0) i++;
                else if(nums[j]%2 == 0) swap(nums[i],nums[j]); 
                if(nums[j]%2 != 0) j--;
                else if(nums[i]%2 != 0) swap(nums[i],nums[j]);
            }

        // 1-pointer approach
        int i=0;
        for(int j=0; j<nums.size();j++){
            if(nums[j]%2 == 0) swap(nums[j], nums[i++]);
        }     
           
        return nums;
    }
};