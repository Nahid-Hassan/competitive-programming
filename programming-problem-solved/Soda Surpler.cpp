#include <bits/stdc++.h>

#define nl "\n"

using namespace std;

int main() {
    int tc, ans, rest;
    cin>>tc;

    while(tc--) {
        int a,b,c;
        ans = 0;
        rest = 0;
        cin>>a>>b>>c;

        int total = a + b;

        while(total >= c) {
            ans += total / c;
            total = (total / c) + (total % c);
        }
        cout<<ans<<nl;
    }
}
