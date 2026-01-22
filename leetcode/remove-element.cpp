#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0, j=nums.size();
        while(i<j){
            if(nums[i] == val){
                nums[i] = nums[j-1];
                j--;
            } else i++;
        }
        return j;
    }
};