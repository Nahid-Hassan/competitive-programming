#include <bits/stdc++.h>

#define nl "\n"

using namespace std;

int main() {
    int tc,a,b,c;

    cin>>tc;

    while(tc--) {
        cin>>a>>b>>c;
        if(a == b) {
            cout<<c/2<<nl;
        }
        else if(a > b) {
            int x = (a-b+a);
            int y = a+b;
            double z = (double)x / (double)y;
            int getA = z * c;
            cout<<getA<<nl;
        }
        else {
            int x = (b-a+b);
            int y = a+b;
            double z = (double)x / (double)y;
            int getB = z * c;
            cout<<c-getB<<nl;
        }
    }

    return 0;
}
