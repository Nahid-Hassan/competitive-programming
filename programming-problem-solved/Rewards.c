#include<stdio.h>

int main()
{
    int a1,a2,a3,b1,b2,b3,n,a,b;

    scanf("%d%d%d",&a1,&a2,&a3);
    scanf("%d%d%d",&b1,&b2,&b3);
    scanf("%d",&n);

    a = a1 + a2 + a3;
    b = b1 + b2 + b3;

    a = a + 4;
    b = b + 9;

    a /= 5;
    b /= 10;

    if((a + b) > n) printf("NO\n");
    else printf("YES\n");

    return 0;
}
/*
Because rewards of one type can be on one shelf, lets calculate number of cups — a and number of medals — b.
Minimum number of shelves that will be required for all cups can be found by formula (a + 5 - 1) / 5.
The same with shelves with medals: (b + 10 - 1) / 10.
If sum of this two values more than n then answer is "NO" and "YES" otherwise.
*/
