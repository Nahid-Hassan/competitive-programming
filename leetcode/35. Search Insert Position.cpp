#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        vector<int>::iterator lower = lower_bound(nums.begin(), nums.end(), target);
        return lower - nums.begin();   
    }
};

int main() {
    Solution s;
    vector<int> nums = {1,3,5,6};
    int target = 5;
    cout << s.searchInsert(nums, target) << endl;
    return 0;
}