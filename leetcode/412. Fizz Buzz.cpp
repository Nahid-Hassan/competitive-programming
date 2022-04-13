#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector <string> sol;
        
        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0 && i % 5 == 0) {
                sol.push_back("FizzBuzz");
            } else if (i % 3 == 0) {
                sol.push_back("Fizz");
            } else if (i % 5 == 0) {
                sol.push_back("Buzz");
            } else {
                sol.push_back(to_string(i));
            }
        }
        return sol;
    }
};

int main() {
    Solution sol;
    vector<string> res = sol.fizzBuzz(15);
    for (auto i : res) {
        cout << i << endl;
    }
    return 0;
}