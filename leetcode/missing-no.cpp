#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();
        int sum = static_cast<int>((n * (n + 1)) / 2);
        int sum_ = 0;
        for (int num : nums)
            sum_ += num;

        return sum - sum_;
    }
};