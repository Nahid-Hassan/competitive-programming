#include <bits/stdc++.h>
#include <cstdio>
#include <cmath>

#define nl "\n"
#define ll long long

using namespace std;

int main() {
    ll sum, n, a, check;
    char ch[50];

    while(cin>>ch) {
        check = atoi(ch);
        ll chlen = strlen(ch);
        sum = 0;

        if(check == 0) {
            break;
        }
        else {
            for(int i = chlen-1, j = 1; i >= 0; i--, j++) {
                a = ch[i] - 48;
                if(a != 0) {
                    sum += a * ( pow(2,j) -1);
                }
            }
        }
        cout<<sum<<nl;
    }

    return 0;
}
