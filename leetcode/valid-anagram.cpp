#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int, int> freq_s;
        unordered_map<int, int> freq_q;

        for (auto str : s){
            freq_s[str]++;
        }
        for (auto tr : t){
            freq_q[tr]++;
        }

        if(freq_s == freq_q){
            return true;
        }
        return false;
    }
};