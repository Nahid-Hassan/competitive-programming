#include <iostream>
#include <cstring>
#include <cmath>

#define nl "\n"
#define ll long long

using namespace std;

bool prime[20000010];
int twprime[20000010];
/*First use sieve - Date(14 july, 2018)*/
void sieve() {
    prime[1] = false;

    int n = sqrt(20000010);

    for(int i = 3; i <= n; i++) {
        if(prime[i] != false) {
            for(int j = 2 * i; j <= 20000010; j = j + i) {
                prime[j] = false;
            }
        }
    }
}

void twinPrime() {
    int j = 1;
    for(int i = 3; i <= 20000000; i++) {
        if(prime[i] && prime[i + 2]) {
            twprime[j++] = i;
            cout<<i<<" ";
        }
    }
}

int main() {
    /*First use memset - Date(14 july, 2018)*/
    memset(prime, true, sizeof(prime));
    sieve();
    twinPrime();

    int n;
    while(cin>>n) {
        cout<<"("<<twprime[n]<<", "<<twprime[n]+2<<")"<<nl;
    }

    return 0;
}
