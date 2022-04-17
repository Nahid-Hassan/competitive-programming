#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstBadVersion(int n) {
        int low = 0;
        int high = n - 1;
        int mid;
        
        while(low <= high) {
            mid = low + (high - low) / 2;
            if (isBadVersion(mid)) high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }
};

int main() {
    Solution s;
    cout << s.firstBadVersion(2) << endl;
    return 0;
}
