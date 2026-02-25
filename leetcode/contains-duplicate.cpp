#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        /*
        unordered_map<int, int> freq;
        for(int num : nums){
            freq[num]++;
            if(freq[num] >=2){
                return true;
            }
        }
        return false;
        */
        unordered_set<int> seen;
        for (int num : nums)
        {
            if (seen.count(num))
            {
                return true;
            }
            seen.insert(num);
        }
        return false;
    }
};