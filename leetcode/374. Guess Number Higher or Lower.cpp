#include <bits/stdc++.h>
using namespace std;

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int low = 0;
        int high = n - 1;
        int mid;
        
        while (low <= high) {
            mid = low + (high - low) / 2;
            
            if (guess(mid) == 0) return mid;
            else if (guess(mid) == -1) high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }
};

int main() {
    Solution s;
    cout << s.guessNumber(10) << endl;
    return 0;
}