#include <bits/stdc++.h>

#define nl "\n"
#define ll long long

using namespace std;

int main() {
    ll n;
    ll a, b, check,count ;
    while (cin>>n && n) {
        count = 0;
        for(int i = 2; i <= n / 2; i++) {
            a = i;

            double sqa = sqrt(a);
            int con = (int)ceil(sqa);
            bool isPrime = false;

            for(int j = 2; j <= con; j++) {
                if(a == 2) {
                    break;
                }
                if(a % j == 0) {
                    isPrime = true;
                }
            }
            if(isPrime == false) {
                a = i;
            } else {
                continue;
            }
            b = n - a;

            double sqb = sqrt(b);
            int con1 = (int)ceil(sqb);
            bool isPrime1 = false;

            for(int j = 2; j <= con1; j++) {
                if(b == 2) {
                    break;
                }
                if(b % j == 0) {
                    isPrime1 = true;
                }
            }
            if(isPrime1 == false) {
                count++;
            }
        }
        cout<<count<<nl;
    }

    return 0;
}
