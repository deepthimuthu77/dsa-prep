#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> keyIndex, res;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == key){
                keyIndex.push_back(i);
            }
        }

        int j = 0; 
        for(int i = 0; i<nums.size(); i++){
            while((j+1 < keyIndex.size()) && (abs(keyIndex[j+1]-i) <= abs(keyIndex[j]-i))) j++;
            if(abs(keyIndex[j]-i) <= k) res.push_back(i);
        }

        return res;
    }
};