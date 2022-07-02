#include <bits/stdc++.h>
#include<algorithm>
#include<iostream>
#define p cout
#define s cin
#define l long long
#define m min
#define r return
#define e endl

using namespace std;

int main()
{
    int n,c25 = 0,c50 = 0;
    s>>n;
    int a[n],check = 1;

    for(int i = 0; i < n; i++) {
        s>>a[i];
        if(25 != a[i] && i==0) {
            check = 0;
            continue;
        }
        else if(25 == a[i]) {
            c25++;
            continue;
        }
        else if(50 == a[i]) {
            c50++;
            if(c25>=1) c25--;
            else {
                check = 0;
            }
        }
        else {
            if(c50 >= 1 && c25 >=1) {
                c50--;
                c25--;
            }
            else if(c25>=3) {
                c25 -= 3;
            }
            else {
                check = 0;
            }
        }
    }
    if(check == 1) p<<"YES"<<e;
    else if(check == 0) p<<"NO"<<e;

    r 0;
}
