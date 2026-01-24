#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void rotate(vector<int> &arr, int d)
    {
        int n = arr.size();

        if (d > n)
            d = d % n;

        reverse(arr.end() - d, arr.end());
        reverse(arr.begin(), arr.end() - d);
        reverse(arr.begin(), arr.end());
    }
};