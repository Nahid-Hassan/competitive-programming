#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        map<char, int> mp;
        
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        
        int total = 0;
        
        for (int i = s.size() - 1; i >= 0; i--) {
            if (i != 0 && (s[i] == 'V' || s[i] == 'X') && s[i-1] == 'I') {
                total += mp[s[i]] - 1;
                i--;
            } else if (i != 0 && (s[i] == 'L' || s[i] == 'C') && s[i-1] == 'X') {
                total += mp[s[i]] - 10;
                i--;
            } else if (i != 0 &&  (s[i] == 'D' || s[i] == 'M') && s[i-1] == 'C') {
                total += mp[s[i]] - 100;
                i--;
            } else {
                total += mp[s[i]]; 
            }
        }
        
        return total;
    }

    int romanToInt2(string s) {
        map<char, int> mp;
        
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        
        int total = 0;
        
        for (int i = s.size() - 1; i >= 0; i--) {
            if (i !=0 && mp[s[i]] > mp[s[i-1]]) {
                total += mp[s[i]] - mp[s[i-1]];
                i--;
            } else {
                total += mp[s[i]];
            }
        }
        
        return total;
    }
};

int main() {
    Solution s = Solution();
    cout << s.romanToInt2("MCMXCIV") << endl;
}