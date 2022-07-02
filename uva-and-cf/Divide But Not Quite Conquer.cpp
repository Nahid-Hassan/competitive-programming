#include <bits/stdc++.h>

#define nl "\n"
#define ll long long

using namespace std;

int main() {
    ll a, b;
    bool t;

    while(cin>>a>>b){
        if(b < 2 || a == 0 || a < b) {
            cout<<"Boring!"<<nl;
            continue;
        }

        t = false;
        int z = 0;
        vector<ll> v;
        vector<ll>::iterator it;
        v.push_back(a);

        while(a) {
            if(a % b == 0) {
                a /= b;
                v.push_back(a);
                if(a == 1) break;
            }
            else {
                t = true;
                break;
            }
        }
        if(a == 1 && !t) {
            for(it = v.begin(); it < v.end() - 1; it++) {
                cout<<*it<<" ";
                z++;
            }
            cout<<v[z]<<nl;
        } else {
            cout<<"Boring!"<<nl;
        }
    }

    return 0;
}
