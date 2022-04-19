#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string frequencySort(string s) {
        map<char, int> mp;
        multimap<int, char, greater<int>> mm;
        
        for(int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
        }
        
        for(auto it : mp) {
            mm.insert({it.second, it.first});
        }
        string ans = "";
        
        for(auto it : mm) {
            for(int i = 0; i < it.first; i++) {
                ans += it.second;
            }
        }
        
        return ans;
    }
};

int main() {
    Solution s;
    cout << s.frequencySort("tree") << endl;
    return 0;
}