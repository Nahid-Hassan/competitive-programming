#include<stdio.h>

int main()
{
    int n, m, a, b;

    scanf("%d%d%d%d",&n,&m,&a,&b);

    if (m*a <= b) printf("%d\n",n*a);
    else {
        if(((n%m) * a) <= b) printf("%d\n",(n/m) * b + ((n%m) * a));
        else printf("%d\n",(n/m) * b + b);
    }

    return 0;
}

/*

    Solution of this problem is based on two claims:
    1. If m·a ≤ b then there is no point to buy a ride ticket.
    2. Sometimes it is better to buy summary more ride tickets for amount of rides than we need.
    If we receive profits bying ride tickets then number of such ones will be .
    For the remain n - m·x rides we must choose the best variant: to buy separate ticket for each ride,
    or to buy ride ticket and use it not fully.

*/
