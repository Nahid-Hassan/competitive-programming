#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea1(vector<int>& height) {
        int res = 0;
        
        for (int i = 0; i < height.size(); i++) {
            for (int j = i + 1; j < height.size(); j++) {
                int area = (j - i) * min(height[i], height[j]);
                res = max(res, area);
            }
        }
        return res;
    }

    int maxArea(vector<int>& height) {
        int res = 0; // hence area cannot negative
        int left = 0;
        int right = height.size() - 1;

        while(left < right) {
            int area = (right - left) * min(height[left], height[right]);
            res = max(area, res);

            if (height[left] > height[right]) right--;
            else left++;
        }

        return res;
    }
};

int main() {
    Solution s;
    vector<int> height = {2,3,4,5,18,17,6};
    cout << s.maxArea(height) << endl;
    return 0;
}