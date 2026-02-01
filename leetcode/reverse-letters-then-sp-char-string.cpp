#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> results(n);

        int leftProduct = 1;
        for(int i=0; i<n; i++){
            results[i] = leftProduct;
            leftProduct *= nums[i]; 
        }

        int rightProduct = 1;
        for(int j=n-1; j>=0; j--){
            results[j] *= rightProduct;
            rightProduct *= nums[j]; 
        }

        return results;
    }
};