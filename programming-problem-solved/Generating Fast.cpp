#include <bits/stdc++.h>

#define nl "\n"

using namespace std;

int main() {
    int tc;

    cin>>tc;

    while(tc--) {
        string s;

        cin>>s;

        sort(s.begin(),s.end());

        do {
            cout<<s<<nl;
        } while(next_permutation(s.begin(),s.end()));
        cout<<nl;
    }

    return 0;
}
