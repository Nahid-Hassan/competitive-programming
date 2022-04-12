#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll binpow(ll a, ll b) {
    /**
     * @brief Binary exponentiation
     * @param a base
     * @param b exponent
     * @return a^b
     * a = 2, b = 4
     * Step-1:
     */
 
    ll res = 1;
    while (b) {
        if (b & 1) {
            // res = res * a % mod;
            res = res * a;
            // cout << b << endl;
        }
        // a = a * a % mod;
        a = a * a;
        b >>= 1;
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    // 2^13 = 2^8 * 2^4 * 2^1
    
    int n, m;
    cin >> n >> m;

    ll res;

    res = binpow(n, m);
    cout << res << endl;

    return 0;
}