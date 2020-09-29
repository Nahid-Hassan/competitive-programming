#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

int main() {
    ull testCase, n, casen = 0;
    string s;

    cin>>testCase;
    while(testCase--) {
        cin>>s>>n;

        casen = 0;
        do {
            if(casen == n) cout<<s<<endl;
            casen++;
        } while(next_permutation(s.begin(), s.end()));
    }

    return 0;
}
