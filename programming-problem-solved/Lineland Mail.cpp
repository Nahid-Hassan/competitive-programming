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
    int n,mn,mx;
    s>>n;
    int a[n];
    int j;
    for(j = 0; j < n; j++) {
        s>>a[j];
    }
    for(int j = 0; j < n; j++) {
        if(j ==0 ) {
            p<<abs(a[j] - a[j+1])<<" "<<abs(a[j] - a[n-1])<<e;
        } else if(j > 0 && j < n - 1) {
            mn = min(abs(a[j] - a[j-1]),abs(a[j] - a[j+1]));
            mx = max(abs(a[j] - a[0]),abs(a[j] - a[n-1]));
            p<<mn<<" "<<mx<<e;
        } else {
            mn = abs(a[j] - a[j-1]);
            mx = abs(a[0] - a[n-1]);
            p<<mn<<" "<<mx<<e;
        }
    }

    r 0;
}

