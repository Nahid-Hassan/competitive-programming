#include <stdio.h>
#include <math.h>

int main() {
    int t, i = 0;
    double t1, t2, d, v, u;
    scanf("%d", &t);
    while(t--) {
        scanf("%lf%lf%lf",&d,&v,&u);
        t1 = d/u;
        t2 = d/sqrt(u*u-v*v);
        if(v >= u || t1 == t2) {
            printf("Case %d: can't determine\n", ++i);
            continue;
        }
        printf("Case %d: %.3lf\n", ++i, t2-t1);
    }
    return 0;
}
