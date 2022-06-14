#include <bits/stdc++.h>

#define nl "\n"
#define ll long long

using namespace std;

int main() {
    ll n,p;
    int i;

    while(cin>>n) {
        p = 1;
        i = 1;

        while(true) {
            if(i % 2) {
                p *= 9;
                i++;
            }
            else {
                p *= 2;
                i++;
            }
            if(p >= n){
                break;
            }
        }
        i--;
        if(i % 2){
            cout<<"Stan wins."<<nl;
        }
        else {
            cout<<"Ollie wins."<<nl;
        }
    }

    return 0;
}
