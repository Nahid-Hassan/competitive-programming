#include<stdio.h>

int main()
{
    int i, n, a, b, c;

    scanf("%d", &n);

    for(i = 1; i <= n; ++i){
        scanf("%d%d%d",&a,&b,&c);

        if(a > b && a > c) {
			 printf("Case %d: %d\n", i, b > c ? b : c);
        }
        else if(b > c) {
			printf("Case %d: %d\n", i, c > a ? c : a);
        }
        else {
			printf("Case %d: %d\n", i, a > b ? a : b);
        }
    }

    return 0;
}
