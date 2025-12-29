#include<math.h>

class Solution {
public:
    bool isPowerOfTwo(int n){
        long max = pow(2,31);
        return (n > 0) && (max % n == 0);
    }
};