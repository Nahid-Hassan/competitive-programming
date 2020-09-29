#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k2, k3, k5, k6;

    cin>>k2>>k3>>k5>>k6;

    int n, m;

    n = min(k2, min(k5, k6));
    m = min(k3, k2 - n);

    cout<<(n*256 + m *32)<<endl;

    return 0;
}
