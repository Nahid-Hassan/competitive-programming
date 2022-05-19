#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string sortString(string s) {
        map <char, int> mp;
        map <char, int>::reverse_iterator rit;
        map <char, int>::iterator it;
        string res = "";

        for (long unsigned int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
        }

        while (!mp.empty()) {
            // increase
            for (it = mp.begin(); it != mp.end(); it++) {
                if (it->second > 0) {
                    res += it->first;
                    it->second -= 1;
                } else {
                    mp.erase(it->first);
                }
            }
            // decrease
            for (rit = mp.rbegin(); rit != mp.rend(); rit++) {
                if (rit->second > 0) {
                    res += rit->first;
                    rit->second -= 1;
                } else {
                    mp.erase(rit->first);
                }
            }
        }

        return res;
    }
};

int main() {
    Solution sol = Solution();
    string s = "aaaabbbbcccc"; 
    cout << sol.sortString(s) << endl;
}