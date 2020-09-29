#include <bits/stdc++.h>

#define nl "\n"

using namespace std;

int main() {
    freopen("in.txt","rt",stdin);
    map<int, int> m;
    vector<int> v;
    int n;

    while(cin>>n) {
        m[n]++;
        v.push_back(n);
    }
    for(int i = 0; i < v.size(); i++) {
        if(m[v[i]] > 0) {
            cout<<v[i]<<" "<<m[v[i]]<<nl;
            m[v[i]] = 0;
        }
    }

    return 0;
}
