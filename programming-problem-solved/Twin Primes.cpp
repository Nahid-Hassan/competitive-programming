#include <bits/stdc++.h>

#define nl "\n"
#define ll long long

using namespace std;

bool difftwo(ll a, ll b) {
    if(abs(b - a) == 2) {
        return true;
    } else {
        return false;
    }
}
bool isPrime(ll n) {
    double sqn = sqrt(n);
        int con = (int)ceil(sqn);
        bool t = false;

        for(int j = 2; j <= con; j++) {
            if(n % j == 0) {
                t = true;
                if(t) {
                    return false;
                }
            }
        }
        return true;
}

int main() {
    /*Generate Twin Primes*/
    int limit = 100005;
    vector < pair<int, int> > tp; /*stands for twin primes*/

    tp.push_back(make_pair(3, 5));
    tp.push_back(make_pair(5, 7));

    ll i = 11, ta, tb,z = 2;
    bool check;

    while(limit) {
        check = false;
        if(isPrime(i)) {
            ta = i;
            i = i + 2;

            if(isPrime(i)) {
                tb = i;
                check = true;
            }
        }
        else {
            i+=2;
        }
        if(check) {
            tp.push_back(make_pair(ta, tb));
            limit--;
        }
    }

    /*output for main program*/

    int s;

    while(cin>>s){
        cout<<"("<<tp[s-1].first<<", "<<tp[s-1].second<<")"<<nl;
    }

    return 0;
}
