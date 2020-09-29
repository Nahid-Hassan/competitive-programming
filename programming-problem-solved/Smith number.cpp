#include <bits/stdc++.h>

#define nl "\n"
#define ll long long

using namespace std;

bool prime(ll n) {
    double sqn = sqrt(n);
    int con = ceil(sqn);
    bool r = false;
    for(int i = 2; i <= con; i++) {
        if(n % i == 0) {
            r = true;
        }
    }
    if(r == false) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    /*prime number*/
    ll a, b, c, d, sumpf, sumd;

    vector <ll> pn;

    pn.push_back(2);
    pn.push_back(3);

    for(ll i = 5; i <= 100000000; i = i + 2) {
        double sqi = sqrt(i);
        ll con = ceil(sqi);

        bool t = false;

        for(ll j = 2; j <= con; j++) {
            if(i % j == 0) {
                t = true;
            }
        }
        if(t == false) {
            cout<<i<<" ";
        }
    }


    /*main program*/

    ll tc;

    cin>>tc;

    while(tc--){
        ll n;

        cin>>n;
        n++;
        while(true) {
            a = n;
            b = n;
            c = 0;
            /*sum all the distinct digit*/
            /*check n is prime or not*/

            if(prime(n)) {
                n++;
                continue;

            }

            sumd = 0;
            while(a > 0) {
                sumd += a % 10;
                a = a / 10;
            }
            //cout<<"n = "<<n<<" sumd = "<<sumd<<nl;

            /*sum all the prime factorizition*/
            sumpf = 0;

            while(b >= 1) {
                //cout<<"-------"<<pn[c]<<nl;
                if(b % pn[c] == 0) {

                    if(pn[c] > 10) {
                        d = pn[c];

                        while(d > 0) {
                            sumpf += d % 10;
                            d = d / 10;
                        }
                    }
                    else {
                        sumpf += pn[c];
                    }
                    b = b / pn[c];
                    //cout<<"sumpf = "<<sumpf<<" -- "<< pn[c]<<nl;
                }
                if(b == 1) {
                    break;
                }
                if(b % pn[c] == 0) {
                    continue;
                }
                else {
                    c++;
                }
            }
            //cout<<sumpf<<nl;

            if(sumd == sumpf) {
                cout<<n<<nl;
                break;
            }
            else {
                n++;
            }

        }
    }

    return 0;
}

