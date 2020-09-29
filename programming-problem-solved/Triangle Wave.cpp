/*
#include <bits/stdc++.h>

#define nl "\n"

using namespace std;

int main() {
    int tc;

    cin>>tc;

    while(tc--) {
        int a, f, m, i, j, k, l;

        cin>>a>>f;

        for(m = 1; m <= f; m++) {
            for(i = 1; i <= a; i++) {
                for(j = 1; j <= i; j++) {
                    cout<<i;
                }
                cout<<nl;
            }
            for(k = a - 1; k >= 1; k--) {
                for(l = 1; l <= k; l++) {
                    cout<<k;
                }
                cout<<nl;
            }
            if(m<=f-1) {
                cout<<nl;
            }
        }
        if(tc > 1) {
            cout<<nl;
        }
    }
    return 0;

}
*/
#include <bits/stdc++.h>

#define nl "\n"

using namespace std;

int main() {
    int t;
    for (cin >> t; t; t--) {
        int a, f;
        cin >> a >> f;
        for (int ff = 1; ff <= f; ff++) {
            for (int i = 1; i <= a; i++) {
                for (int j = 0; j < i; j++)
                    cout<<i;
                cout<<nl;
            }
            for (int i = a - 1; i >= 1; i--) {
                for (int j = 0; j < i; j++)
                    cout<<i;
                cout<<nl;
            }
            if (ff < f)
                cout<<nl;
        }
        if (t > 1)
            cout<<nl;
    }
    return 0;
}
