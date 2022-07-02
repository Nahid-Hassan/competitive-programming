#include <bits/stdc++.h>

#define nl "\n"

using namespace std;

int minesweeper(char a) {
    for(int i = -1; i <= 1; i++) {
        for(int j = -1; j <= 1; j++) {

        }
    }
}

int main() {
    int n, m;

    while(cin>>n>>m) {
        char a[n][m];
        if(n == 0 && m == 0) {
            return 0;
        }
        else {
            for(int i = 0; i < n; i++) {
                for(int j = 0; j < m; j++) {
                    cin>>a[i][j];
                    if(i > 0) {
                        minesweeper(a[i][j]);
                    }
                }
            }
        }

    }

    return 0;
}

