#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int count = 0;

        for (int i = 0; i < words.size(); i++) {
            
            auto res = mismatch(words[i].begin(), words[i].end(), s.begin());
            if (res.first == words[i].end()) count++;
        }
    }
    return count;
};

int main() {
    Solution s = Solution();
    vector <string> words;
    
    words.push_back("a");
    words.push_back("b");
    words.push_back("c");
    words.push_back("ab");
    words.push_back("bc");
    words.push_back("abc");

    cout << s.countPrefixes(words, "abc") << endl;
}