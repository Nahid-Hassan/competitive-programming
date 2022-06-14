#include <bits/stdc++.h>
#define p printf
#define s cin

using namespace std;

int main()
{
    int n, d;

    s>>n>>d;

    int a[n], sum = 0;

    for(int i = 0; i < n; i++) {
        s>>a[i];
        sum += a[i];
    }
    if(sum + 10 * (n - 1) > d) {
        p("-1\n");
    }
    else {
        p("%d\n",((d - sum) / 5));
    }

    return 0;
}
