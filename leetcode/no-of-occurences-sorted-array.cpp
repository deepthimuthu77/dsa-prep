#include<bits/stdc++.h>
using namespace std;

int firstOcc(vector<int> nums, int low, int high, int key){
    int first;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(nums[mid] == key){
            first = mid;
            high  = mid-1;
        }
        else if(nums[mid] < key){
            low = mid +1;
        }
        else high = mid -1;
    }
    return first;
}   
int lastOcc(vector<int> nums, int low, int high, int key){
    int last;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(nums[mid] == key){
            last = mid;
            low  = mid+1;
        }
        else if(nums[mid] < key){
            low = mid +1;
        }
        else high = mid -1;
    }
    return last;
}

int noOfOcc(vector<int> nums, int key){
    int first = firstOcc(nums, 0, nums.size()-1, key);
    int last = lastOcc(nums, 0, nums.size()-1, key);
    return (last-first)+1;
}