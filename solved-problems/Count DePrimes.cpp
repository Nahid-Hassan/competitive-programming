#include <bits/stdc++.h>
using namespace std;

#define file_input freopen("in.txt", "rt", stdin)
#define file_output freopen("out.txt", "wt", stdin);
#define nl "\n"
#define ll long long
#define mx  500005

bool prime[mx];
ll p[mx], k = 0;
ll answer[mx];

void sieve() {
    memset(prime, true, sizeof(prime));
    ll i, j;
    prime[0] = false;
    prime[1] = false;
    for(ll i = 2; i <= mx; i++) {
        if(prime[i] != false) {
            p[k++] = i;
            for(ll j = i + i; j <= mx; j += i) {
                prime[j] = false;
            }
        }
    }
}

int main() {
    //file_input;
    sieve();

    return 0;
}
