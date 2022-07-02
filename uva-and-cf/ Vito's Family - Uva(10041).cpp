#include<bits/stdc++.h>
#include<cstdio>
#include<cmath>

#define nl "\n"

using namespace std;

int main() {
    int testCase;
    cin>>testCase;

    while(testCase--) {
        int n;
        cin>>n;

        int a[n];

        for(int i= 0; i < n; i++) {
            cin>>a[i];
        }
        sort(a,a+n);

        int total_Distance = 0;

        for(int i = 0; i < n -1; i++) {
            total_Distance += abs(a[i] - a[i+1]);
        }
        cout<<total_Distance<<nl;
    }

    return 0;
}
