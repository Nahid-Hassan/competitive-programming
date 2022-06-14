#include <bits/stdc++.h>

#define nl "\n"
#define ll long long

using namespace std;

ll StoB(string s) {
    return strtoull (s.c_str (),NULL,2);
}

int main() {
    int tc;

    cin>>tc;

    string s1, s2;

    for(int i = 1; i <= tc; i++) {
        cin>>s1>>s2;

        int n = StoB(s1);
        int m = StoB(s2);

        if(__gcd(n,m) >  1) {
            cout<<"Pair #"<<i<<": All you need is love!"<<nl;
        }
        else {
            cout<<"Pair #"<<i<<": Love is not all you need!"<<nl;
        }
    }
    return 0;
}
