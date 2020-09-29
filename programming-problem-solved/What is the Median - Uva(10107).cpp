#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define ll long long
#define nl "\n"

using namespace __gnu_pbds;
using namespace std;

int main() {
    vector<int> v;

    int n;
    while(cin>>n) {
        v.push_back(n);
        sort(v.begin(),v.end());
        int v_size = v.size();

        if(v_size % 2 == 0) {
            int a = v_size / 2;
            int b = a - 1;
            int c = (v[a] + v[b]) / 2;
            cout<<c<<nl;
        }
        else {
            int a = v_size / 2;
            cout<<v[a]<<nl;
        }
    }

    return 0;
}
