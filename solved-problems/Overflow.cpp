#include <bits/stdc++.h>
#include <cstring>
#include <cstdio>

#define nl "\n"
#define INF 2147483647


using namespace std;

int main() {
    char s[1000], b;
    double a, c;

    while() {
        cout<<s<<nl;

        sscanf(s, "%lf%c%lf",&a,&b,&c);

        if(a>INF) {
            cout<<"first number is too big"<<nl;
        }
        if(c>INF) {
            cout<<"second number is too big"<<nl;
        }
        if(b == '+' && a + c > INF) {
            cout<<"result is too big"<<nl;
        }
        if(b == '*' && a + c > INF) {
            cout<<"result is too big"<<nl;
        }
    }

    return 0;
}
