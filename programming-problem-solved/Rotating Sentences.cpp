#include <bits/stdc++.h>
using namespace std;

int main( ) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s[110];
    int mx = 0, m = 0;

    while(getline(cin, s[m])) {
        int ss = s[m].size();
        mx = max(mx, ss);
        m++;
    }

    for(int i = 0; i < mx; i++) {
        for(int j = m - 1; j >= 0; j--) {
            if(s[j].size() > i) {
                cout<<s[j][i];
            } else {
                cout<<" ";
            }
        }
        printf("\n");
    }

    return 0;
}
