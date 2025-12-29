#include<vector>
#include<algorithm>
using namespace std;

class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        int n = arr.size();
        int size = n/2;
        
        for (int i = 0; i<size; i++){
            swap(arr[i],arr[n-1]);
            n--;
        }
    }
};