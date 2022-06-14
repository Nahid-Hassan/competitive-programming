#include <bits/stdc++.h>
#include <cmath>

#define nl "\n"

using namespace std;

int main() {
    int h1,m1,h2,m2,m;

    while(cin>>h1>>m1>>h2>>m2) {
        if(h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0) {
            return 0;
        }
        int mm1 = (h1*60)+m1;
        int mm2 = (h2*60)+m2;

        if(mm2 < mm1) {
            mm2 = mm2 + 1440;
        }
        cout<<mm2-mm1<<nl;
    }

    return 0;
}
