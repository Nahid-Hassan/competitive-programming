#include <bits/stdc++.h>

#define nl "\n"

using namespace std;

int main() {
    int n;
    stack <int> s;

    while(cin>>n && (n>=0)) {
        int temp = n;

        if(temp == 0) {
            cout<<0<<nl;
        }
        else {
            while(temp > 0) {
                int p;
                p = temp % 3;
                s.push(p);
                temp = temp / 3;
            }
            while(!s.empty()) {
                cout<<s.top();
                s.pop();
            }
            cout<<nl;
        }
    }

    return 0;
}
