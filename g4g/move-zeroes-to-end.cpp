#include<vector>
using namespace std;

class Solution {
  public:
    void pushZerosToEnd(vector<int> &arr) {
        int index = 0;
        for(int i = 0; i<arr.size(); i++){
            if(arr[i]!=0){
                arr[index] = arr[i];
                index++;
            }
        }
        for(int i = index; i<arr.size(); i++){
            arr[i] = 0;
        }
    }
};