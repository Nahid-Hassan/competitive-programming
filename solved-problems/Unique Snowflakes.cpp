#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    //freopen("in.txt","rt",stdin);
    int tc;
    cin>>tc;

    while(tc--) {
        map <ll, int> mp;

        ll n,a;
        cin>>n;

        while(n--) {
            cin>>a;
            mp.insert(make_pair(a, 1));
        }
        cout<<mp.size()<<endl;
    }

    return 0;
}
/*
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;
int snowflakes[1000000+1];
int idx[1000000 + 1];
int n;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int cas;
    cin >> cas;
    while (cas--){
        int maxSnow = 0;
        int l = 0, r = 0;
        memset(idx, 0, sizeof(idx));
        cin >> n;
        for (int i = 0; i < n; ++i){
            cin >> snowflakes[i];
        }
        while (r < n){
            while (r < n && !idx[snowflakes[r]])
                idx[snowflakes[r++]] = 1;
            maxSnow = max(maxSnow, r - l);
            idx[snowflakes[l++]] = 0;
        }
        cout << maxSnow << '\n';
    }
    return 0;
}
*/
