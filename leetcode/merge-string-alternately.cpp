#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int s1 = word1.size();
        int s2 = word2.size();
        string res = "";

        for(int i=0; i<max(s1,s2); i++){
            if(i<s1) res+=word1[i];
            if(i<s2) res+=word2[i];
        }

        return res;
    }
};