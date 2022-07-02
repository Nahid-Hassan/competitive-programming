#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }

int main() {
    int tc, a[99], t, answer;
    string s;

    cin>>tc;
    getline(cin, s);
    while(tc--) {
        getline(cin, s);
        istringstream ss(s);
        t = 0;

        while(ss>>a[t]) t++;

        answer = 0;
        for(int i = 0; i < t; i++) {
            for(int j = i + 1; j < t; j++) {
                answer = max(answer, gcd(a[i], a[j]));
            }
        }
        cout<<answer<<endl;
    }

    return 0;
}
