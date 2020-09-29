#include <bits/stdc++.h>

#define nl "\n"

using namespace std;

int main()
{
    int a, b;
    cin>>a>>b;

    int m, n;
    cin>>m>>n;

    int c[a], d[b];

    for(int i = 0; i < a; i++) {
        cin>>c[i];
    }
    for(int i = 0; i < b; i++) {
        cin>>d[i];
    }

    int countm = 0;
    int countn = 0;

    int t = 0;

    bool e = false;
    bool f = false;

    for(int i = 0; i < a; i++) {
        countm++;
        if(countm >= m) {
            t = i;
            f = true;
            break;
        }
    }
    //cout<<countm<<nl;
    for(int i = 0; i < b; i++) {
        if(d[i] > c[t]) {
            countn++;
        }
        if(countn >= n) {
            e = true;
            break;
        }
    }
    if(e && f) {
        cout<<"YES"<<nl;
    }
    else {
        cout<<"NO"<<nl;
    }

    return 0;
}
