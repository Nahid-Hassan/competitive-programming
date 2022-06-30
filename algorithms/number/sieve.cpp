#include <bits/stdc++.h>
using namespace std;

#define MX 5000010
bool prime[MX];

void sieve() {
    memset(prime, true, sizeof memset);
    for (int i = 2; i * i <= MX; i++) {
        if (prime[i] == 1) {
            for (int j = i * i; j <= MX; j+= i) {
                prime[j] = 0;
            }
        }
    }
}

int main() {
    sieve();

    return 0;
}