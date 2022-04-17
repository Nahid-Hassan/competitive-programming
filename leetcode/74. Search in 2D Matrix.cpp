#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // 2d binary search
        int m = matrix.size();
        if (m == 0) return false;
        int n = matrix[0].size();
        if (n == 0) return false;
        int l = 0, r = m * n - 1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            int x = mid / n, y = mid % n;
            if (matrix[x][y] == target) return true;
            else if (matrix[x][y] < target) l = mid + 1;
            else r = mid - 1;
        }
        return false;
    }
};

int main() {
    Solution s;
    return 0;
}