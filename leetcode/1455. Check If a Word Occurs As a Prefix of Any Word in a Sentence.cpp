#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        stringstream ss(sentence);
        string temp;
        int idx = 0;
        vector <string> vs;
        
        while (ss >> temp) {
            vs.push_back(temp);
        }
        
        for (long unsigned int i = 0; i < vs.size(); i++) {
            auto res = mismatch(searchWord.begin(), searchWord.end(), vs[i].begin());
            if (res.first == searchWord.end()) return idx + 1;
            else idx++;
        }
        return -1;
    }
};

int main() {
    Solution s = Solution();
    string sentence = "i am tired", searchWord = "you";
    cout << s.isPrefixOfWord(sentence, searchWord) << endl;
}