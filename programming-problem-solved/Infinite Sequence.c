#include<stdio.h>

int main()
{
    long int a,b,c;
    scanf("%ld%ld%ld",&a,&b,&c);
    if ((a < b && c <= 0) || (a > b && c >= 0) || (c && (b-a) % c)) printf("NO\n");
    else printf("YES\n");

    return 0;
}

/*


675A - Infinite Sequence

Firstly, in case c = 0 we should output YES if a = b else answer is NO.

If b belongs to sequence b = a + k * c where k is non-negative integer.

So answer is YES if (b - a) / c is non-negative integer else answer is NO.

#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (c == 0) {
        if (a == b) cout << "YESn";
        else cout << "NOn";
    } else {
        if ((b - a) % c == 0 && (b - a) / c >= 0) cout << "YESn";
        else cout << "NOn";
    }
}

*/
