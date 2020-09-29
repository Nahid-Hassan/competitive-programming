#include <bits/stdc++.h>

#define nl "\n"
#define ll long long

using namespace std;

int main()
{
    ll n;

    cin>>n;

    ll a[n], i;

    for(i = 0; i < n; i++) {
        cin>>a[i];
    }
    sort(a,a+i);

    ll b = a[0],countb = 0;
    ll c = a[i-1], countc = 0;;

    for(ll j = 0; j < n; j++) {
        if(b == a[j]) countb++;
        if(c == a[j]) countc++;

    }
    if(b==c) {
        cout<<abs(c-b)<<" "<<n * (n - 1) / 2<<nl;
    } else {
        cout<<abs(c-b)<<" "<<(countb * countc)<<nl;
    }

    return 0;
}

/**
#include <iostream>
#include <climits>
using namespace std;
const int INF = INT_MAX;
const int MAX = 200005;
int a[MAX];
int main()
{
    ios::sync_with_stdio(false);
    long long n;
    cin >> n;
    int mn = INF, mx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mn = min(mn, a[i]);
        mx = max(mx, a[i]);
    }
    long long t1 = 0, t2 = 0;
    for (int i = 0; i < n; i++)
    {
        t1 += (a[i] == mn);
        t2 += (a[i] == mx);
    }
    cout << mx - mn << " ";
    if (mn == mx)
        cout << n * (n - 1) / 2;
    else
        cout << t1 * t2;
    return 0;
}
**/
