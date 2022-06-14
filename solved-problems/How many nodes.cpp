#include <bits/stdc++.h>

#define nl "\n"
#define ll long long

using namespace std;

int main() {
    ll catalanN[] = {1, 1, 2, 5, 14, 42, 132, 429, 1430, 4862, 16796, 58786, 208012, 742900, 2674440, 9694845, 35357670, 129644790, 477638700, 1767263190, 6564120420, 24466267020, 91482563640, 343059613650, 1289904147324};

    ll n;

    while(cin >> n) {
        for(int i = 1; i < 25; i++) {
            if(catalanN[i] == n) {
                cout<<i<<nl;
            }
        }
    }

    return 0;
}
