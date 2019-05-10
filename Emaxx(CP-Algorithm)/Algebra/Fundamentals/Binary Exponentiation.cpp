/*
The idea of binary exponentiation is, that we split the   work using the binary representation of the exponent.
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// Recursive approach 
ll binpowRecursive(ll a, ll b) {
    if (b == 0) {
        return 1;
    } 
    ll res = binpowRecursive(a, b / 2);
    if(b % 2) {
        return res * res * a;
    } else {
        return res * res;
    }
}
// Another apporach
ll binpowNonRecursive(ll a, ll b) {
    ll res = 1;

    while(b > 0) {
        if(b & 1) {
            res = res * a;
        }
        a = a * a;
        b >>= 1;
    }
    
    return res;
}

// Applications

// Effective computation of large exponents modulo a number
//a⋅b≡(a mod m)⋅(b mod m)(mod m))
//Note: If m is a prime number we can speed up a bit this algorithm by calculating x^n mod(m−1) 
//instead of xn. This follows directly from Fermat's little theorem.
ll binpowLargeEMN(ll a, ll b, ll m) {
    a %= m;

    ll res = 1;

    while(b > 0) {
        if (b & 1) {
            res = res * a % m;
        }
        a = a * a % m;
        b >>= 1;
    }

    return res;
} 

// Effective computation of Fibonacci numbers
// Problem: Compute n-th Fibonacci number Fn.


int main() {
    int a = 3;
    int b = 13;
    int m = 10;

    cout << binpowRecursive(a, b) << endl;
    cout << binpowNonRecursive(a, b) << endl;
    cout << binpowLargeEMN(a, b, m) << endl;


    return 0;
}