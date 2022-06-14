#include <bits/stdc++.h>

#define nl "\n"
#define ll long long

using namespace std;

int main( ) {
    ll a, b, count;
    int div;

    while(cin>>a>>b && a && b) {
        count = 0;

        while(true) {
            div = a / b;

            if(div > 0) {
                a = a - (b * div);
                count++;
            }
            else {
                b = abs(a - b);
                count++;
            }
            if(a == 0 || b == 0) {
                break;
            }
        }
        if(count%2) {
            cout<<"Stan wins"<<nl;
        }
        else {
            cout<<"Ollie wins"<<nl;
        }
    }

    return 0;
}
