#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map <char, int> mp1, mp2;
        map <char, int>::iterator it1, it2;
        bool flag = true;
        
        for (int i = 0; i < ransomNote.size(); i++) {
            mp1[ransomNote[i]]++;
        }
        
        for (int i = 0; i < magazine.size(); i++) {
            mp2[magazine[i]]++;
        }
        
        it1 = mp1.begin();
        it2 = mp2.begin();
        
        if (mp1.size() > mp2.size()) {
            return false;
        } else {
            for(it1 = mp1.begin(); it1 != mp1.end(); it1++) {
                it2 = mp2.find(it1->first);
                if (it1->second <= it2->second) {
                    continue;
                } else {
                    flag = false;
                    break;
                }
            }            
        }
        return flag;
    }
};

int main() {
    Solution s;
    string ransomNote = "aa";
    string magazine = "aab";
    cout << s.canConstruct(ransomNote, magazine) << endl;
    return 0;
}