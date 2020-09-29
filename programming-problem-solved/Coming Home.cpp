#include <bits/stdc++.h>

#define nl "\n"

using namespace std;

int main() {
    int tc;

    cin>>tc;

    for(int i = 1; i <= tc; i++) {
        int k, cth,ctm;
        cin>>k;
        scanf("%d:%d",&cth,&ctm);

        int h[k], m[k], q[k];

        for(int j = 0; j < k; j++) {
            scanf("%d:%d%d",&h[j],&m[j],&q[j]);
        }
        int z[k],mm1,mm2;
        mm1 = (cth*60)+ctm;
        for(int i =0; i < k; i++) {
            mm2 = (h[i]*60)+m[i];
            if(mm2 < mm1) {
                z[i] = mm2 + 1440 + q[i];
            }
            else {
                z[i] = mm2+q[i];
            }
        }
        sort(z,z+k);
        printf("Case %d: %d\n",i,z[0]-mm1);
    }

    return 0;
}
