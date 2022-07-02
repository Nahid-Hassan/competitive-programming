#include <bits/stdc++.h>

#define nl "\n"

using namespace std;

int main( ) {
    int n;
    int check = 0;
    int ans[]={1,1,2,5,14,42,132,429,1430,4862,16796};

    while(cin>>n) {
        if(check == 1) {
            cout<<nl;
        }
        cout<<ans[n]<<nl;
        check = 1;
    }

    return 0;
}
