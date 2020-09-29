#include <bits/stdc++.h>

#define nl "\n"

using namespace std;

int main( ){
    int tc;
    int a, b;

    cin>>tc;

    while(tc--) {
        cin>>a>>b;

        a = abs(a);
        b = abs(b);

        if(a == b) {
            if(a == 0 && b == 0) {
                cout<<1<<nl;
            }
            else {
                cout<<4<<nl;
            }
        }
        else if(a == 0 || b == 0) {
            if(a == 0) {
                cout<<2<<nl;
            }
            else {
                cout<<1<<nl;
            }
        }
        else {
            cout<<"TOO COMPLICATED"<<nl;
        }

    }

    return 0;
}
