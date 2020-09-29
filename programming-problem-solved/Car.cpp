#include <bits/stdc++.h>
using namespace std;

int main() {
    double tc, a, b, c;

    int casen = 1;
    while(cin>>tc>>a>>b>>c && tc) {
        if(tc == 1) {
            double toron = (b - a) / c;
            double soron = ((a + b) * c) / 2.0;
            printf("Case %d: %.3lf %.3lf\n",casen++, soron, toron);
        } else if (tc == 2) {
            double time = (b - a) / c;
            double soron = ((a + b) * time) / 2.0;
            printf("Case %d: %.3lf %.3lf\n",casen++, soron, time);
        } else if (tc == 3) {
            double sesveg = sqrt((a * a) + (2 * b * c));
            double time = (sesveg - a) / b;
            printf("Case %d: %.3lf %.3lf\n",casen++, sesveg, time);
        } else if (tc == 4) {
            double adiveg = sqrt((a * a) - (2 * b * c));
            double time = (a - adiveg) / b;
            printf("Case %d: %.3lf %.3lf\n",casen++, adiveg, time);
        }
    }

    return 0;
}
