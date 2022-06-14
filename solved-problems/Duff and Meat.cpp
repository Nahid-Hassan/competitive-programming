#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, price;
    scanf("%d",&n);
    int a[n],p[n];
    int minAmount = 0;

    for(i = 0; i < n; i++) {
        scanf("%d%d",&a[i],&p[i]);
        price = min(price,p[i]);
        minAmount += price * a[i];
    }
    printf("%d\n",minAmount);

    return 0;
}
