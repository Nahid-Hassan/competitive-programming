/*Snakes and Ladders - Uva(11459)*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll binarySearch(ll x, ll a[], ll n) {
    ll mid, left, right;
    left = 0;
    right = n - 1;

    while(left <= right) {
        mid = (left + right) / 2;

        if(a[mid] == x) {
            return mid;
        }
        if(a[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    //freopen("in.txt","rt",stdin);
    ll testCase;
    cin>>testCase;

    while(testCase--) {
        ll p, sl, dr;
        cin>>p>>sl>>dr;

        ll a[sl], b[sl];
        for(ll i = 0; i < sl; i++) {
            cin>>a[i]>>b[i];
        }

        ll c[dr];
        for(ll i = 0; i < dr; i++) {
            cin>>c[i];
        }

        ll pos[p];
        for(ll i = 0; i < p; i++) pos[i] = 1;

        ll count = 0, t = 0;
        for(ll i = 0, j = 0; i < dr; i++,j++) {
            pos[i] += c[j];
            if(pos[i] >= 100) {
                pos[i] = 100;
                break;
            }
            ll lwrbound = binarySearch(pos[i], a, sl);
            if(lwrbound == -1) {
                //continue;
            }
            else if(pos[i] == a[lwrbound]) {
                pos[i] = b[lwrbound];
                if(pos[i] >= 100) {
                    pos[i] = 100;
                    break;
                }
            }

            count++;
            t++;
            if(count == dr) {
                break;
            } else if(t == p) {
                i = -1;
                t = 0;
            }
        }
        for(ll i = 0; i < p; i++) {
            cout<<"Position of player "<<i+1<<" is "<<pos[i]<<".\n";
        }
    }
    return 0;
}
