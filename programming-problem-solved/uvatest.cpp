#include <bits/stdc++.h>

#define nl "\n"
#define ll long long

using namespace std;

bool isPrime(int n) {
    double sqn = sqrt(n);
    int con = (int)ceil(sqn);
    int prime = false;

    for(int i = 2; i <= con; i++) {
        if(n % i == 0) {
            prime = true;
        }
    }
    if(prime) {
        return false;
    }
    else {
        return true;
    }
}

int main() {
    vector < pair <int, int> > tp;

    ll limit = 100000;
    ll i = 11;

    tp.push_back(make_pair(3,5));
    tp.push_back(make_pair(5,7));

    while(limit) {

    }

    return 0;
}
