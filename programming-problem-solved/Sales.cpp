#include <bits/stdc++.h>

#define nl "\n"

using namespace std;

int main() {
    int tc, n;
    cin>>tc;

    while(tc--) {
        cin>>n;

        int a[n];

        for(int i = 0; i < n; i++) {
            cin>>a[i];
        }
        int count = 0;
        for(int i = 1; i < n; i++) {
            for(int j = 0; j < i; j++) {
                if(a[j] <= a[i]) {
                    count++;
                }
            }
        }
        cout<<count<<nl;
    }

    return 0;
}
