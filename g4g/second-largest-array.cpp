#include<vector>
#include<algorithm>
using namespace std;

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        sort(arr.begin(), arr.end());
        int largest = arr[arr.size()-1];
        for(int i = arr.size()-2; i>=0; i--){
            if (arr[i] < largest){
                return arr[i];
            }
        }
        return -1;
    }
};