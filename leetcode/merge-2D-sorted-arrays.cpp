#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> sumNums;
        int i=0, j=0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i][0] == nums2[j][0]){
                sumNums.push_back({nums1[i][0], nums1[i++][1]+nums2[j++][1]});
            } else if (nums1[i][0] < nums2[j][0]){
                sumNums.push_back({nums1[i][0], nums1[i++][1]});
            } else{
                sumNums.push_back({nums2[j][0], nums2[j++][1]});
            }
        }
        while(i<nums1.size()){
            sumNums.push_back({nums1[i][0], nums1[i++][1]});
        }
        while(j<nums2.size()){
            sumNums.push_back({nums2[j][0], nums2[j++][1]});
        }
        return sumNums;
    }
};