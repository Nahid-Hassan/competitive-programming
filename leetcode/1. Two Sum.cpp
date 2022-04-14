#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map <int, int> mp;
        vector <int> res;

        for (int i = 0; i < nums.size(); i++) {
            if (mp.find(target - nums[i]) != mp.end()) {
                res.push_back(mp[target - nums[i]]);
                res.push_back(i);
                return res;
            }
            mp[nums[i]] = i;
        }
        return res;
    }
};

int main() {
    Solution sol;
    // 0 2
    vector<int> nums = {2, 11, 7, 15};
    int target = 9;
    vector<int> soln = sol.twoSum(nums, target);
    for (int i = 0; i < soln.size(); i++) {
        cout << soln[i] << " ";
    }
    cout << endl;
    return 0;
}