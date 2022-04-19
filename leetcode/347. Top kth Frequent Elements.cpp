#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp1;
        vector <int> sol;
        
        multimap<int, int, greater<int>> mp2;
        multimap<int, int, greater<int>>::iterator it = mp2.begin();
        
        for(int i = 0; i < nums.size(); i++) {
            mp1[nums[i]]++;
        }
        
        for (auto it : mp1) {
            mp2.insert({it.second, it.first});
        }
        
        
        
        int count = 0;
        for(auto it : mp2) {
            sol.push_back(it.second);
            count++;
            
            if (count == k) break;
        }        
        
        return sol;    
    }
};

int main() {
    Solution s;
    vector<int> nums = {1,1,1,2,2,3};
    int k = 2;
    vector<int> sol = s.topKFrequent(nums, k);
    for(int i = 0; i < sol.size(); i++) {
        cout << sol[i] << " ";
    }
    cout << endl;
    return 0;
}