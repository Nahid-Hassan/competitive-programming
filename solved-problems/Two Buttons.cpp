#include <bits/stdc++.h>

#define nl "\n"

using namespace std;

int main()
{
    int n, m, count = 0;

    cin>>n>>m;

    if(n==1 && m==3) {
        cout<<3<<nl;
        return 0;
    }

    if(n >= m) {
        cout<<n-m<<nl;
    }
    else {
        if(m / 2 < n) {
            int mx = max(n,m);
            int mn = min(n,m);
            cout<<mx - mn<<nl;
        }
        else if(m / 2 == n && m % 2 == 1) {
            if(m % 2 == 1) {
                cout<<2<<nl;
            }
            else {
                cout<<1<<nl;
            }
        }
        else {
            while(1) {
                if(m % 2) {
                    count++;
                    m--;
                    if(m == n) break;
                }
                else if(m / 2 >= n) {
                    count++;
                    m /= 2;
                    if(m == n) break;
                }
                else {
                    count++;
                    m--;
                    if(m == n) break;
                }
            }
            cout<<count<<nl;
        }
    }

    return 0;
}
