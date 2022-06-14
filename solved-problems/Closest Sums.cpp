#include <bits/stdc++.h>
using namespace std;

#define nl "\n"
#define ll long long

int main() {
    int n,casen = 1;

    while(cin>>n && n) {
        ll a[n];

        cout<<"Case "<<casen++<<":"<<nl;

        for(int i = 0; i < n; i++) cin>>a[i];

        ll m, b, i = 0;
        cin>>m;
        while(m--) {
            cin>>b;

            int ans = a[0] + a[1];

            for(int i = 0; i < n; i++) {
                for(int j = i + 1; j < n; j++) {
                    int c = a[i] + a[j];

                    if(abs(ans - b) > abs(b - c)) ans = c;
                }
            }
            cout<<"Closest sum to "<<b<<" is "<<ans<<"."<<nl;
        }
    }

    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;

#define nl "\n"

int main() {
    int n;
    int casen = 1;
    while(cin>>n && n) {
        vector<int> v;
        cout<<"Case "<<casen<<":"<<endl;
        for(int i = 0; i < n; i++) {
            int a;
            cin>>a;
            v.push_back(a);
        }

        int count = 0;
        vector<int> sum;
        vector<int>::iterator lb, ub;
        for(int i = 0; i < n - 1; i++) {
            for(int j = i + 1; j < n; j++) {
                int add = v[i] + v[j];
                sum.push_back(add);
                count++;
            }
        }

        sort(sum.begin(), sum.end());

        int m;
        cin>>m;
        for(int i = 0; i < m; i++) {
            int a;
            cin>>a;
            lb = lower_bound(sum.begin(), sum.end(), a);

            if(sum[0] == *lb) {
                if(*lb >= a ) {
                    cout<<"Closest sum to "<<a<<" is "<<*lb<<"."<<endl;
                } else {
                    int up;
                    lb++;
                    up = *lb;
                    cout<<"Closest sum to "<<a<<" is "<<up<<"."<<endl;
                }
            } else {
                if(*lb == a ) {
                cout<<"Closest sum to "<<a<<" is "<<*lb<<"."<<endl;
                } else {
                    int low, up;
                    lb--;
                    low = *lb;
                    lb++;
                    lb++;
                    up = *lb;

                    if(abs(a-low) <= abs(a-up)) {
                        cout<<"Closest sum to "<<a<<" is "<<low<<"."<<endl;
                    } else {
                        cout<<"Closest sum to "<<a<<" is "<<up<<"."<<endl;
                    }
                }
            }
        }
        casen++;
    }

    return 0;
}

*/
