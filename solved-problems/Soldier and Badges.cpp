#include <bits/stdc++.h>

#define nl "\n"

using namespace std;

int main() {
    int n, ans = 0;

    cin>>n;

    int a[n];

    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }
    sort(a,a+n);

    for(int i = 0; i < n -1; i++) {
        for(int j = i; j < n -1; j++) {
            if(a[i] == a[j+1]) {
                ans++;
                a[j+1] += 1;
            }
        }
    }
//    for(int i = 0; i < n; i++) {
//        cout<<a[i]<<" ";
//    }
//    cout<<nl;
    cout<<ans<<nl;

    return 0;
}

