#include <bits/stdc++.h>

#define nl "\n"
#define ll long long

using namespace std;

int main() {
    int n;

    while(cin>>n && n) {
        if(n>=101) {
            cout<<"f91("<<n<<") = "<<n-10<<nl;
        }
        else if(n<=100) {
            cout<<"f91("<<n<<") = "<<91<<nl;
        }
    }

    return 0;
}
