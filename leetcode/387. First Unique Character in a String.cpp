#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> mp;
        
        for(int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
        }
        
        for(int i = 0; i < s.size(); i++) {
            if (mp[s[i]] == 1) {
                return i;
            }
        }
        
        return -1;
    }
};

int main() {
    Solution s;
    cout << s.firstUniqChar("leetcode") << endl;
    return 0;
}