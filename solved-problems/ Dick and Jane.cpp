#include <bits/stdc++.h>

#define nl "\n"

using namespace std;

int main() {
    //freopen("in.txt","rt",stdin);
    int s, p, y, j, d;
    while(cin>>s>>p>>y>>j) {
        d = j + 12 - p - y;
        y = d / 3;
        d = j + 12 - s - y;
        p = d / 2;
        s = j + 12 - p - y;
        cout<<s<<" "<<p<<" "<<y<<nl;
    }

    return 0;
}
