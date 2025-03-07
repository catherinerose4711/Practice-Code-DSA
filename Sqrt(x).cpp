#include <iostream>

using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) return x; // Base case
        
        int low = 1, high = x, ans = 0;
        
        while (low <= high) {
            long long mid = low + (high - low) / 2; // Avoid integer overflow
            
            if (mid * mid == x) {
                return mid; // Perfect square case
            } else if (mid * mid < x) {
                ans = mid;  // Store mid as possible answer
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        
        return ans; // Nearest integer square root
    }
};

int main() {
    Solution sol;
    int x = 8;
    cout << "Square root of " << x << " is: " << sol.mySqrt(x) << endl;
    return 0;
}

