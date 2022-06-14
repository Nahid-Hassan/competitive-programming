#include <bits/stdc++.h>
using namespace std;

int longest_common_subsequence(string s1, string s2) {
        int row = s1.size();
        int col = s2.size();

        int dp[row+1][col+1];

        // make zero first row and first column
        for (int i = 0; i <= col; i++) {
            dp[0][i] = 0;
        }
        for (int j = 0; j <= row; j++) {
            dp[j][0] = 0;
        }

        for (int i = 1; i <= row; i++) {
            for (int j = 1; j <= col; j++) {
                if (s1[i-1] == s2[j-1]) {
                    dp[i][j] = dp[i-1][j-1] + 1;
                } else {
                    dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
                }
            }
        }


        return dp[row][col];
}

int main() {
    string s1 = "abcddef";
    string s2 = "acdf";

    int length_lcs = longest_common_subsequence(s1, s2);
    cout << length_lcs << endl;
}