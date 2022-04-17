#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> sol;
        if (numRows == 0) return sol;
        sol.push_back(vector<int>(1,1));
        if (numRows == 1) return sol;
        sol.push_back(vector<int>(2,1));
        if (numRows == 2) return sol;

        for (int i = 0; i < numRows - 2; i++) {
            for(int j = i + 1; j < numRows - 1; j++) {
                
            }
        }
    }
};

int main() {

}