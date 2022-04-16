#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector <int> nums(nums1.size() + nums2.size());
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), nums.begin());
        return nums.size() % 2 == 0 ? (nums[nums.size() / 2] + nums[nums.size() / 2 - 1]) / 2.0 : nums[nums.size() / 2.0];
    }
};

int main() {
    Solution s;
    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};
    cout << s.findMedianSortedArrays(nums1, nums2) << endl;
    return 0;
}