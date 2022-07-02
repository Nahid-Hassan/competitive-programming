#include <bits/stdc++.h>
#define nl "\n"
using namespace std;

int main() {
    int n, t;

    cin>>n>>t;

    int a[n];

    for(int i = 1; i < n; i++) {
        cin>>a[i];
    }

    int sum = 0;

    for(int i = 1; i < n; i++) {
        sum = i + a[i];

        if(sum == t) {
            cout<<"YES"<<nl;
            return 0;
        }
        else {
            i = sum - 1;
        }
    }
    cout<<"NO"<<nl;


    return 0;
}
