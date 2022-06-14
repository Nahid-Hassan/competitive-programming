#include <bits/stdc++.h>

#define nl "\n"
#define ull unsigned long long

using namespace std;

int main() {
    int tc;
    ull n;

    cin>>tc;

    while(tc--) {
        cin>>n;

        if(n <= 1) {
            cout<<n<<nl;
        }else {
            int ans[12];
            for(int i = 9; i > 1; i--) {
                ans[i] = 0;
                while(n % i == 0) {
                    n /= i;
                    ans[i]++;
                }
            }if(n == 1) {
                for(int i = 2; i <= 9; i++) {
                    for(; ans[i]; ans[i]--) {
                        cout<<i;
                    }
                }
                cout<<nl;
            } else {
                cout<<-1<<nl;
            }
        }
    }

    return 0;
}
