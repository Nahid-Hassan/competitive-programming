#include <bits/stdc++.h>
#include <cstdio>

#define nl "\n"

using namespace std;

int main() {
    int t;

    cin>>t;

    for(int i = 1; i <= t; i++) {
        double c, d;

        cin>>c>>d;

        double f = (9*c)/5 + d;
        double ans = 5*f/9;

        printf("Case %d: %.2lf\n",i,ans);
    }

    return 0;
}
