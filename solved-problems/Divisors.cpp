#include <bits/stdc++.h>
#include <cmath>

#define nl "\n"

using namespace std;

int main() {
    int tc;
    int lb, ub; /*stands for lower_bound & upper_bound*/
    int ans;

    cin>>tc;

    while(tc--) {
        cin>>lb>>ub;
        int count = 0;
        int div = 0;

        for(int i = lb; i <= ub; i++) {
            count = 0;
            for(int j = 1; j <= sqrt(i); j++) {
                if(i % j == 0) {
                    if(j * j == i) {
                        count++;
                    } else {
                        count += 2; /*count both*/
                    }
                }
            }
            if(count > div) {
                div = count;
                ans = i;
            }
        }
        cout<<"Between "<<lb<<" and "<<ub<<", "<<ans<<" has a maximum of "<<div<<" divisors."<<nl;
    }

    return 0;
}

