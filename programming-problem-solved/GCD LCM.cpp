#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
int lcm(int a, int b) { return a * (b / gcd(a, b)); }

int main() {
    int testCase;
    int a, b;

    cin>>testCase;
    while(testCase--) {
        cin>>a>>b;
        if(gcd(a, b) == a && lcm(a, b) == b) {
            cout<<a<<" "<<b<<endl;
        } else {
            cout<<"-1"<<endl;
        }
    }

    return 0;
}

