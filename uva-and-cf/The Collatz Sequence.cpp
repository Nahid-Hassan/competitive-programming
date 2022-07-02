#include <bits/stdc++.h>

#define nl "\n"
#define ll long long

using namespace std;

int main() {
    ll n, m;
    int casen = 0;

    while(cin>>n>>m && (n > 0 && m > 0)) {
        int count = 0;
        ll a = n;
        while(n <= m) {
            if(n == 1) {
                count++;
                break;
            }
            else if(n % 2 == 0) {
                count++;
                n = n / 2;
            }
            else {
                count++;
                n = n * 3 + 1;
            }
        }
        cout<<"Case "<<++casen<<": A = "<<a<<", limit = "<<m<<", number of terms = "<<count<<nl;
    }

    return 0;
}
