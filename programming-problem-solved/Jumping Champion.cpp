#include <bits/stdc++.h>
using namespace std;

#define mx 1000010

bool prime[mx];

void sieve() {
    prime[0] = false;
    prime[1] = false;
    int sqmx = sqrt(mx);

    for(int i = 2; i <= sqmx; i++) {
        if(prime[i] != false) {
            for(int j = 2 * i; j <= mx; j = j + i) {
                prime[j] = false;
            }
        }
    }
}

int main() {
    memset(prime, true, sizeof(prime));
    sieve();

    int tc, upper, lower;

    cin>>tc;
    while(tc--) {
        cin>>lower>>upper;
        if(lower>upper)
        swap(lower, upper);

        vector<int> p;
        for(int i = lower; i <= upper; i++) {
            if(prime[i]) {
                p.push_back(i);
            }
        }
        map<int, int> mp;

        int psize = p.size();
        int res;
        for(int i = 1; i < psize; i++) {
            res = p[i] - p[i-1];
            mp[res]++;
        }
        int mxx = -1;
        for(auto it = mp.begin(); it != mp.end(); it++) {
            if(it->second > mxx) {
                mxx = it->second;
            }
        }
        int count = 0;
        int ans;
        for(auto it = mp.begin(); it != mp.end(); it++) {
            if(it->second == mxx) {
                count++;
                ans = it->first;
            }
        }
        if(count == 1) {
            cout<<"The jumping champion is "<<ans<<endl;
        } else {
            cout<<"No jumping champion"<<endl;
        }
    }

    return 0;
}
