#include <bits/stdc++.h>
#include<cstring>
#include<cstdio>

using namespace std;

int main() {
    double h, m, sl = 0;

    while (scanf("%lf:%lf", &h, &m) != EOF && (h || m)) {
        sl = ((1.0/2.0) * ((60.0 * h) - (11.0 * m)));

        if(sl <= 180) {
            printf("%.3lf\n",sl);
        } else {
            printf("%.3lf\n",360 - sl);
        }
    }

    return 0;
}
