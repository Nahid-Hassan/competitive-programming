
#include<stdio.h>

int main()
{
    long int n, k;
    long int rest, total = 0, div;

    while(scanf("%ld%ld",&n,&k)==2) {
        total = n;
        while(n >= k) {
            rest = n % k;
            div = n / k;
            total += (n/k);
            n = rest + div;
        }
        printf("%d\n",total);
    }

    return 0;
}
