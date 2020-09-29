#include <bits/stdc++.h>

#define nl "\n"

using namespace std;

int EulerPhi(int n) {
    int sum = n;

    for(int i = 2; i*i <= n; i++) {
        if(n % i == 0) sum -= sum/i;
        while(n % i == 0) {
            n /= i;
        }
    }
    if(n!=1) sum -= sum / n;

    return sum;
}

int main() {
    int n;

    while(cin>>n && n) {
        if(n == 1) {
            cout<<0<<nl;
        }
        else {
            cout<<EulerPhi(n)<<nl;
        }
    }

    return 0;
}
