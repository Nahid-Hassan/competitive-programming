#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int n, m;
    map <ll, ll> mp;

    while(cin>>n>>m && n && m) {
        int a;
        while(n--){
            cin>>a;
            mp[a] = 1;
        }
        ll count = 0;
        while(m--) {
            cin>>a;
            if(mp[a] == 1) count++;
        }
        mp.clear();
        cout<<count<<endl;
    }

    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll countSame(set<ll> &n, set<ll> &m) {
    ll count = 0;

    for(set<ll>::iterator it = n.begin(); it != n.end(); it++) {
        if(m.find(*it) != m.end()) {
            count++;
        }
    }
    return count;
}

int main() {
    ll n, m;

    while(cin>>n>>m && n && m) {
        set<ll> nn;
        set<ll> mm;

        int a;
        for(int i = 0; i < n; i++) {
            cin>>a;
            nn.insert(a);
        }
        for(int i = 0; i < m; i++) {
            cin>>a;
            mm.insert(a);
        }
        if(nn.size() < mm.size()) cout<<countSame(nn, mm)<<endl;
        else cout<<countSame(mm, nn)<<endl;
    }

    return 0;
}

*/
