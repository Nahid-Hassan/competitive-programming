#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map <int, int> mp;
        bool flag = true;
        
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        
        if (mp.size() < nums.size()) {
            return true;
        } else return false;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1,2,3,1};
    cout << s.containsDuplicate(nums) << endl;
    return 0;
}