#include <bits/stdc++.h>

#define nl "\n"
#define ll long long

using namespace std;

int main() {
    ll n;
    while(cin>>n) {

    //Binet's Formula
    ll x = ( pow((1 + sqrt(5)), n) - pow((1 - sqrt(5)), n) ) / (pow(2, n) * sqrt(5));

    cout<<"The Fibonacci number for "<<n<<" is "<<x<<nl;
    }

    return 0;
}
