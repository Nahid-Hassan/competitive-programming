#include <bits/stdc++.h>
#include <cstdio>

#define nl "\n"

using namespace std;

int main() {
    int sn;

    while(cin>>sn && sn) {
        double payment[sn];
        double avg = 0;

        for(int i = 0; i < sn; i++) {
            scanf("%lf",&payment[i]);
            avg += payment[i];
        }
        avg = avg/sn;

        double ans = 0, res = 0;

        for(int i = 0; i < sn; i++) {
             double pres =(long) ((payment[i] - avg) * 100.0) / 100.0;
             if(pres > 0) {
                ans += pres;
             }
             else {
                res += pres;
             }
        }
        res = -res;
        printf("$%.2f\n", res > ans ? res : ans);
    }

    return 0;
}
