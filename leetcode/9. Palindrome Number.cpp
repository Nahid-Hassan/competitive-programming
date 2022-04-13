#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        int arr[10];
        int idx = 0;
        bool flag = true;
        
        if (x < 0) {
            return false;
        } else {
            while(x) {
                arr[idx++] = x % 10;
                x /= 10;
            }
            int temp = idx - 1;
            for (int i = 0; i < idx / 2; i++) {
                if (arr[i] != arr[temp]) {
                    flag = false;
                    break;
                }
                temp--;
            }
        }
        return flag;
    }
};

int main() {
    Solution s;
    cout << s.isPalindrome(121) << endl;
    return 0;
}