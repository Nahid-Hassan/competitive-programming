#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1, j = n - 1, k = m + n - 1;
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }
        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }
    }
};

int main() {
    Solution s;
    vector<int> nums1 = {1,2,3,4,0,0,0,0,0};
    vector<int> nums2 = {2,2,5,6,7};
 
    s.merge(nums1, 4, nums2, 3);
 
    return 0;
}