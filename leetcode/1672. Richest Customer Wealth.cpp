#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum = 0;
        int rich = -32536;
        
        for (int i = 0; i < accounts.size(); i++) {
            for (int j = 0; j < accounts[i].size(); j++) {
                sum += accounts[i][j];
            }
            rich = max(rich, sum);
            sum = 0;
        }
        return rich;
    }
};

int main() {
    Solution s;
    vector<vector<int>> accounts = {{1,2,3},{3,2,1},{1,2,4},{0,2,1},{0,0,1},{1,3,1}};
    cout << s.maximumWealth(accounts) << endl;
    return 0;
}