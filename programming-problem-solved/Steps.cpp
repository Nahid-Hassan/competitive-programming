#include <bits/stdc++.h>

#define nl "\n"

using namespace std;

int main() {
    int a, b, c, d, steps = 0, diff;
    int tc;

    cin>>tc;

    while(tc--) {
        cin>>a>>b;

        steps = 0;
        diff = b - a;

        if(diff != 0) {
            c = 2;
            d = 0;

            while(diff > d) {
                d += c / 2;
                c++;
                steps++;
                //cout<<d<<" "<<c<<" "<<steps<<" "<<diff<<nl;
            }
        }
        cout<<steps<<nl;
    }
}
