#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll compute_hash(string const & s) {
    const int p = 31;      // prime number
    const int m = 1e9 + 9; // 10 ^ 9 + 9
    ll hash_value = 0;
    ll p_pow = 1;

    for (char c : s) {
        hash_value = (hash_value + (c - 'a' + 1) * p_pow) % m;
        p_pow = (p_pow * p) % m;
    }

    return hash_value;
}

int main(int argc, char const *argv[]) {
    cout << compute_hash("aaa") << endl;

    return 0;
}
