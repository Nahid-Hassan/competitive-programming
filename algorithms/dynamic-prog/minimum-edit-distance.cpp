#include <bits/stdc++.h>
using namespace std;

int minimum_edit_distance(string s1, string s2) {
    int row = s1.size();
    int col = s2.size();

    int dp[row+1][col+1];
    for(int i = 0; i <= row; i++) {
        dp[i][0] = i;
    }
    for(int j = 0; j <= col; j++) {
        dp[0][j] = j;
    }

    for(int i = 1; i <= row; i++) {
        for(int j = 1; j <= col; j++) {
            if (s1[i-1] == s2[j-1]) {
                dp[i][j] = dp[i-1][j-1];
            } else {
                dp[i][j] = 1 + min(dp[i][j-1], min(dp[i-1][j-1], dp[i-1][j]));
            }
        }
    }

    // for (int i = 0; i <= row; i++) {
    //     for (int j = 0; j <= col; j++) {
    //         cout << dp[i][j] << " ";
    //     } cout << endl;
    // }

    // find deleted character
    // for (int i = row; i >= 0; ) {
    //     for (int j = col; j >= 0; ) {
    //         if (dp[i][j] == dp[i-1][j-1] && s1[])
    //     }
    // }

    return dp[row][col];
}

int main() {
    string s1 = "abcdef";
    string s2 = "agced";

    int min_edit_dis = minimum_edit_distance(s1, s2);
    cout << "Minimum edit distance between two string is " << min_edit_dis << endl;

    return 0;
}