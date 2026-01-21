#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // TLE
        // sort(nums1.begin(), nums1.end());
        // while(nums1[0] == 0) nums1.erase(nums1.begin());
        // for(int elt : nums2) nums1.push_back(elt);
        // sort(nums1.begin(), nums1.end());

        int i = m-1;
        int j = n-1;
        int k = m+n-1;

        while(i>=0 && j>=0){
            if(nums1[i] > nums2[j]) nums1[k--] = nums1[i--];
            else nums1[k--] = nums2[j--];
        }

        // copy remaining in nums2
        while(j>=0){
            nums1[k--] = nums2[j--];
        }
    }
};