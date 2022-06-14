#include <bits/stdc++.h>

#define nl "\n"

using namespace std;

int main() {
    int tc, ans;

    cin>>tc;

    for(int j = 1; j <= tc; j++) {
        int n, p, q;
        cin>>n>>p>>q;
        int a[n];
        for(int i = 0; i < n; i++) {
            cin>>a[i];
        }
        int count = 0;
        int i = 0;
        ans = 0;
        for(int k = 1; k <= n && k <= p; k++) {
            ans += a[i];
            if(ans > q) {
                break;
            }
            count++;
            i++;
        }
        printf("Case %d: %d\n",j,count);
    }

    return 0;
}
