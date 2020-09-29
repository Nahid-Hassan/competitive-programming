#include <bits/stdc++.h>

#define nl "\n"
#define ll long long

using namespace std;

ll fibonacci_n[60];

int main() {
    ll tc;
    ll n;

    //Binet's Formula
    for(ll i = 1; i <= 55 ; i++) {
        ll x = ( pow((1 + sqrt(5)), i) - pow((1 - sqrt(5)), i) ) / (pow(2, i) * sqrt(5));
        fibonacci_n[i-1] = x;
    }
    while(cin>>n) {
        if(n == -1) {
            break;
        }
        else {
            cout<<fibonacci_n[n+1]-1<<" "<<fibonacci_n[n+2]-1<<nl;
        }
    }

    return 0;
}
