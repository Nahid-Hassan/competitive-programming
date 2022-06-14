#include <stdio.h>
#define ll long long

int main()
{
    int n, p, t, k;
    
    scanf("%d",&k);
    while(k--) {
        scanf("%d%d%d",&n,&t,&p);

        //Binomial Coefficients method emaxx cp-algorithm
        int a = t - (n * p);
        int b = n-1 + a;

        if (b - a < a) {
            a = b - a;
        }

        ll result = 1;
        for(int i = 1; i <= a; i++) result = result * (b - i + 1) / i;
       
        printf("%lld\n",result);
    }

    return 0;
}
