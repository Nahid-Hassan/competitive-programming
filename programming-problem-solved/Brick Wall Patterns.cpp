#include <bits/stdc++.h>

#define nl "\n"
#define ll long long

using namespace std;

ll fibonacci_n[60];

//int fibonacci_ (ll n) {
//    //Binet's Formula
//    for(ll i = 1; i <= 52 ; i++) {
//        ll x = ( pow((1 + sqrt(5)), i) - pow((1 - sqrt(5)), i) ) / (pow(2, i) * sqrt(5));
//        fibonacci_n[i] = x;
//    }
//
//    return 0;
//}

int main() {
    ll n,tc;

    //Binet's Formula
    for(ll i = 1; i <= 55 ; i++) {
        ll x = ( pow((1 + sqrt(5)), i) - pow((1 - sqrt(5)), i) ) / (pow(2, i) * sqrt(5));
        fibonacci_n[i] = x;
    }

    while(cin>>n && n) {
        cout<<fibonacci_n[n+1]<<nl;
    }

    return 0;
}
