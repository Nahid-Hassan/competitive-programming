#include <bits/stdc++.h>
using namespace std;

#define mx 1000000000

bool prime[mx];

void sieve() {
    prime[1] = false;
    int sqmx = sqrt(mx);

    for(int i = 2; i <= sqmx; i++) {
        if(prime[i] != false) {
            for(int j = 2 * i; j <= mx; j = j + i) {
                prime[j] = false;
            }
        }
    }
}

int main() {
    memset(prime, true, sizeof(prime));
    sieve();


}
