#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(s.begin(), s.end());
    }
};

int main() {
    Solution s;
    vector<char> s1 = {'h', 'e', 'l', 'l', 'o'};
    s.reverseString(s1);
    for (auto c : s1) {
        cout << c << " ";
    }
    cout << endl;
    return 0;
}