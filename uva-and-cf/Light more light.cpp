#include <bits/stdc++.h>

#define nl "\n"
#define ll long long

using namespace std;

int main() {
    ll n;

    while(cin>>n && n){
        ll sqn  = sqrt(n);

        if(sqn * sqn  == n) {
            cout<<"yes"<<nl;
        }
        else {
            cout<<"no"<<nl;
        }
    }

    return 0;
}
