#include <bits/stdc++.h>

#define nl "\n"
#define ull unsigned long long

using namespace std;

int main() {
    ull a[25],sum = 1;
    a[1] = 1;
    a[2] = 2;
    a[3] = 6;
    a[4] = 24;
    a[5] = 120;
    a[6] = 720;
    a[7] = 5040;
    a[8] = 40320;
    a[9] = 362880;
    a[10] = 3628800;
    a[11] = 39916800;
    a[12] = 479001600;
    a[13] = 6227020800;
    a[14] = 87178291200;
    a[15] = 1307674368000;
    a[16] = 20922789888000;
    a[17] = 355687428096000;
    a[18] = 6402373705728000;
    a[19] = 121645100408832000;
    a[20] = 2432902008176640000;

    int tc;

    cin>>tc;

    for (int dataset = 1; dataset <= tc; dataset++) {
        char s[25];
        cin>>s;

        ull n[25];
        ull total = 1;

        for(ull i = 0; i < 26; i++) {
            n[i] = 1;
        }
        ull slen = strlen(s);
        for(ull i = 0, k = 1; i < slen ; i++, k++) {
            if(s[i] == '\0') {
                    continue;
            }
            for(ull j = i + 1; j < slen; j++) {
                if(s[i] == s[j]) {
                    s[j] = '\0';
                    n[k] = n[k] + 1;
                }
            }
        }
        for(ull i = 1; i <= slen; i++) {
            ull p = a[n[i]];
            total *= p;
        }
        cout<<"Data set "<<dataset<<": "<<a[slen] / total<<nl;
    }

    return 0;
}
/*
    int tc;

    cin>>tc;
    char s[30],s1[30];
    char alpha[30] ="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    ull alphalen = strlen(alpha);
    ull count[25], z;

    while(tc--) {
        cin>>s;
        strcpy(s1,s);
        for(ull i = 0; i <= 25; i++) {
            count[i] = 0;
        }
        z = 0;
        ull p = 0;
        ull slen = strlen(s);
        for(ull i = 0; i < slen; i++) {
            for(ull j = 0; j < alphalen; j++) {
                if(s1[i] == alpha[j]) {
                    count[p]++;
                }
            }
            p++;
            cout<<count[i]<<" "<<z<<nl;
        }

        for(ull i = 0; i < slen; i++) {
            if(count[i]) {
                a[slen-1] /= count[i];
            }
        }
        cout<<a[slen-1]<<nl;
    }
*/
