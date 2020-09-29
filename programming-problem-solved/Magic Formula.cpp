#include <bits/stdc++.h>

#define nl "\n"
#define ll long long

using namespace std;

int main() {
    ll a, b, c, d, l, fvalue;

    while(cin>>a>>b>>c>>d>>l && (a != 0 && b != 0 || c != 0 || d != 0 || l != 0)) {
        int count = 0;
        for(int i = 0; i <= l; i++) {
            fvalue = (a * (i * i)) + (b * i) + c;
            if(fvalue % d == 0) {
                count++;
            }
        }
        cout<<count<<nl;
    }

    return 0;
}
