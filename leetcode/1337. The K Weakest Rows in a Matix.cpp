#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector <int> sol;
        multimap<int, int> mm;

        int count = 0;
        
        for (int i = 0; i < mat.size(); i++) {
            for(int j = 0; j < mat[i].size(); j++) {
                if (mat[i][j] == 1) {
                    count++;
                }
            }
            mm.insert({ count, i });
            count = 0;
        }
        for (int i = 0; i < k; i++) {
            sol.push_back(mm.begin()->second);
            mm.erase(mm.begin());
        }
        return sol;
    }
};

/*
[[1,1,0,0,0],
 [1,1,1,1,0],
 [1,0,0,0,0],
 [1,1,0,0,0],
 [1,1,1,1,1]], 
 */

int main() {
    Solution sol;
    vector<vector<int>> mat = {{1,0,0,0},{1,1,1,1},{1,0,0,0},{1,0,0,0}};
    vector<int> sol1 = sol.kWeakestRows(mat, 2);
    for (int i = 0; i < sol1.size(); i++) {
        cout << sol1[i] << " ";
    }
    cout << endl;
    return 0;
}