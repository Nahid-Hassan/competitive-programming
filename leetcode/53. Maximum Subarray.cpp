#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = -123123123;
        int curSum = 0;
        
        for(int i = 0; i < nums.size(); i++) {
            curSum += nums[i];
            
            if (curSum > maxSum) {
                maxSum = curSum;
            } 
            
            if (curSum < 0) {
                curSum = 0;
            }
        }
        return maxSum;
    }
};

int main() {
    Solution s;
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout << s.maxSubArray(nums) << endl;
    return 0;
}