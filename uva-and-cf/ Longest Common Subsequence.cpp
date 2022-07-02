#include <bits/stdc++.h>
using namespace std;

int LCS(string s, string ss, int m, int n) {
    int l[m+1][n+1];
    memset(l, 0 , sizeof(l));

    for(int i = 1; i <= m; i++) {
        for(int j = 1; j <= n; j++) {
            if(s[i-1] == ss[j-1]) {
                l[i][j] = l[i-1][j-1] + 1;
            } else {
                l[i][j] = max(l[i-1][j], l[i][j-1]);
            }
        }
    }
    return l[m][n];
}

int main() {
    string s, ss;

    while(getline(cin, s) && getline(cin, ss)) {
        cout<<LCS(s, ss, s.size(), ss.size())<<endl;
    }

    return 0;
}
