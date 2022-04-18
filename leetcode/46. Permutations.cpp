#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> sol;
        
        sort(nums.begin(), nums.end());
        sol.push_back(nums);
        
        while(next_permutation(nums.begin(), nums.end())) {
            sol.push_back(nums);
        }
        return sol;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1,2,3};
    vector<vector<int>> soln = sol.permute(nums);
    for(auto &v : soln) {
        for(auto &i : v) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}