#include <bits/stdc++.h>

#define ll long long
#define nl "\n"

using namespace std;

int main() {
    ll testCase,k = 0;
    cin>>testCase;

    while(testCase--) {
        ll R, C;
        cin>>C>>R;

        if(C == R) {
            cout<<"Case #"<<++k<<": "<<0<<nl;
            continue;
        }
        set <ll> s;
        set <ll>::iterator it;

        ll n = C - R;

        for(ll i = 1; i <= sqrt(n); i++) {
            if(n % i == 0) {
                if(i > R) {
                    s.insert(i);
                }
                if((n / i) > R) {
                    s.insert(n / i);
                }
            }
        }
        cout<<"Case #"<<++k<<":";

        for(it = s.begin(); it != s.end(); it++) {
            cout<<" "<<*it;
        }
        cout<<nl;
    }

    return 0;
}
