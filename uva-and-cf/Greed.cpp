#include <bits/stdc++.h>
#define p cout
#define s cin
#define l long long
using namespace std;

int main()
{
    l n,t = 0;
    s>>n;
    l a[n];
    l b[n];

    for(l i = 0; i < n; i++) {
        s>>b[i];
        t += b[i];
    }
    for(l i = 0; i < n; i++) {
        s>>a[i];
    }
    sort(a,a+n);
    if((a[n-1]+a[n-2]) >= t) p<<"YES"<<endl;
    else p<<"NO"<<endl;


    return 0;
}
