#include <bits/stdc++.h>
using namespace std;

int main() {
    int testCase, n, casen = 1, j;

    cin>>testCase;
    for(casen = 1; casen <= testCase; casen++) {
        cin>>n;

        int a[4];
        j = 0;
        for(int i = 2; ; i++) {
            if(n % i == 0) {
                a[j++] = i;
                a[j++] = n / i;
            }
            if(j == 4) break;
        }
        printf("Case #%d: %d = %d * %d = %d * %d\n", casen, n, a[0], a[1], a[2], a[3]);
    }
}
