#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        return needle.size() == 0 ? 0 : haystack.find(needle);
    }
};

int main() {
    Solution s = Solution();
    cout << s.strStr("hello", "la") << endl;
    return 0;
}