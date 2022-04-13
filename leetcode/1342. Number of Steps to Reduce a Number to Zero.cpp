#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfSteps(int num) {
        int count = 0;
        
        while(num) {
            if (num % 2) {
                num -= 1;
                count++;
            } else {
                num /= 2;
                count++;
            }
        }
        return count;
    }
};

int main() {
    Solution s;
    cout << s.numberOfSteps(14) << endl;
    return 0;
}