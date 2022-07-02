#include <bits/stdc++.h>

#define nl "\n"
#define ll long long

using namespace std;

int main() {
    int tc, n;
    int s , i , temp,l;
    ll sum = 0;
    cin>>tc;

    while(tc--) {
        cin>>n;

        if(n < 1) {
            cout<<0<<nl;
        }
        else {
            s = sqrt(n);
            sum = 0;
            l = n;
            for(i = 1; i < s + 1; i++) {
                temp = n / i;
                sum +=  temp + ((l - temp) * (i - 1));
                l = temp;
            }
            if (n / s > s) {
                sum += s;
            }
            cout<<sum<<nl;
        }
    }
    return 0;
}
//cout<<"sum = "<<sum<<" temp = "<<temp<<" l - temp"<<l-temp<<" i - 1"<<i - 1<<" (l - temp) * (i - 1)"<<(l - temp) * (i - 1)<<nl;
/*
#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>

#define nl "\n"
#define ll long long

using namespace std;

int main() {
    int tc;

    cin>>tc;

    while(tc--) {
        ll n;
        cin>>n;
        ll result = 0;
        ll count = 0,i;
        ll sq = sqrt(n),t = 0, tt = 0;
        for(int i = 1,j = 1; i <= sq; i++,j++) {
            t = (n/i - n/(i+1));
            cout<<t<<nl;
            result += t*i;
            if(j<=sq) {
                result += n/j;
            }
        }
        cout<<result<<nl;
        //cout<<n+result+(n-i)<<nl;
    }

    return 0;
}
*/
