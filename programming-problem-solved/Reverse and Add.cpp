#include <bits/stdc++.h>

#define nl "\n"
#define ll long long

using namespace std;


int main() {
    int tc;

    cin>>tc;

    while(tc--) {
        ll n;
        cin>>n;
        ll count = 0;
        while(1) {
            ll x = n;

            stringstream ss;
            ss << x;

            string str;
            ss >> str;

            reverse(str.begin(), str.end());

            ss.clear();

            ss << str;
            ss >> x;

            if(n == x) {
                break;
            }
            else {
                n = n + x;
                count++;
            }
        }
        cout<<count<<" "<<n<<nl;
    }

    return 0;
}
