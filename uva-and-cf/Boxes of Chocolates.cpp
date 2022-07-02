#include <bits/stdc++.h>
using namespace std;

int main() {
    int testCase, friends, box, ans, mod, k, a;

    cin>>testCase;
    while(testCase--) {
        cin>>friends>>box;

        ans = 0;
        for(int i = 1; i <= box; i++) {
            cin>>k;

            mod = 1;
            for(int j = 1; j <= k; j++) {
                cin>>a;
                mod *= a;
                mod %= friends;
            }
            ans += mod;
            ans %= friends;
        }
        cout<<ans<<endl;
    }

    return 0;
}
