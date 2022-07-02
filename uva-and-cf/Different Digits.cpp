#include <bits/stdc++.h>
#include <cstring>

#define nl "\n"

using namespace std;

int main() {
    int n, m;
    string s = "0123456789";
    string s1;
    s1 = s;
    int ans;
    while(scanf("%d%d",&n,&m)==2) {
        ans = 0;

        //make integer to string using stringstream
        stringstream nn, mm;
        nn << n; mm << m;
        string sn = nn.str();
        string sm = mm.str();

        for(int i = n; i <= m; i++) {
            stringstream ss;
            ss<<i;
            string sa = ss.str();

            int salen = sa.size(), b = 0;

            for(int j = 0; j < salen; j++) {
                for(int k = 0; k < 10; k++) {
                    if(sa[j] == s1[k]) {
                        s1[k] = '\0';
                        k = 10;
                        b++;
                    }
                }
            }
            if(salen == b) {
                ans++;
            }
            s1 = s;
        }
        cout<<ans<<nl;
    }

    return 0;
}
