#include <bits/stdc++.h>

#define nl "\n"
#define ll long long

using namespace std;

int main() {
    vector <ll> selfN;

    selfN.push_back(1);
    selfN.push_back(3);
    selfN.push_back(5);
    selfN.push_back(7);
    selfN.push_back(9);
    selfN.push_back(20);
    selfN.push_back(31);
    selfN.push_back(42);

    for(int i = 43; i <= 1000000; i++) {
        ll sum = i + 1;
        int j = i - 1;
        int a = j;
        int generator = false;
        while (sum >= i - 36) {
            sum = a;
            while(a > 0) {
                sum += a % 10;
                a /= 10;

            }
            if(sum == i) {
                generator = true;
                break;
            }
            --j;
            a = j;
        }
        if(generator == false) {
            selfN.push_back(i);
        }
    }
    for(auto i : selfN) {
        cout<<i<<nl;
    }

    return 0;
}
