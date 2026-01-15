#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index = 0;
        for(int num:nums){
            if(num!=0) swap(num,nums[index++]);
        }
        for(int i=index; i<nums.size();i++) nums[i] = 0; 
    }
}; 