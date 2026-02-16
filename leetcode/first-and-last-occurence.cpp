#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int firstOcc(vector<int>& arr, int low, int high, int key){
        int first = NULL;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(arr[mid] == key){
                first = mid;
                high = mid-1;
            }else if(arr[mid]<key){
                low=mid+1;
            } else high = mid-1;
        }
        return first;
    }
    int lastOcc(vector<int>& arr, int low, int high, int key){
        int last = NULL;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(arr[mid] == key){
                last = mid;
                low = mid+1;
            }else if(arr[mid]<key){
                low=mid+1;
            } else high = mid-1;
        }
        return last;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int first = firstOcc(nums,0,nums.size()-1,target);
        int last = lastOcc(nums,0,nums.size()-1,target);
        return {first,last};        
    }
};