#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

ull sum(int n) { ull m = ((n + 1) / 2); return (3 * (2 * m * m - 3)); }

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ull n;
    while(cin>>n) cout<<sum(n)<<endl;

    return 0;
}
