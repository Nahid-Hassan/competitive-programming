#include <bits/stdc++.h>

#define nl "\n"
#define ll long long

using namespace std;

int main( ) {
    int n;
    int sum;

    while(cin>>n && n) {
        int a[n];
        sum = 0;
        for(int i = 0; i < n; i++) {
            cin>>a[i];
            sum ^=a[i];
        }
        if(sum != 0) {
            cout<<"Yes"<<nl;
        }
        else {
            cout<<"No"<<nl;
        }
    }


    return 0;
}
