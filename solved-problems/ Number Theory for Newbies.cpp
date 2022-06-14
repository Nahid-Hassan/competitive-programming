#include <bits/stdc++.h>

#define nl "\n"
#define ll long long

using namespace std;

int main( ) {
    ll a, b, diff, t, l;
    string n,m;
    while(cin>>n) {
        m = n;
        sort(n.rbegin(), n.rend());
        sort(m.begin(),m.end());
        if(m[0] == '0') {
            for(int i = 1; i < m.size(); i++) {
                if(m[i] != '0'){
                    swap(m[0], m[i]);
                    break;
                }
            }
        }
        a = stol(n);
        b = stol(m);

        diff = a - b;
        cout<<a<<" - "<<b<<" = "<<diff<<" = "<<9<<" * "<<diff/9<<nl;
    }

    return 0;
}
