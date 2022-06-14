#include <bits/stdc++.h>
#include <cstdio>
#include <cstdlib>

#define ll long long
#define nl "\n"

using namespace std;

int main() {
    ll testCase, n, sum = 0, count = 0;

    cin>>testCase;

    while(testCase--) {
        cin>>n;

        int a[n];
        count = 0;
        sum = 0;

        for(int i = 0; i < n; i++) {
            cin>>a[i];
            sum += a[i];
        }
        double avg = sum / n;

        for(int i = 0; i < n; i++) {
            if(a[i] > avg) {
                count++;
            }
        }
        double ans = (double) count / (double) n;
        printf("%.3lf\%\n",ans*100.0);
    }


    return 0;
}
