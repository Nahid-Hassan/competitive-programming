#include<stdio.h>
#include<math.h>

int main()
{
    int n, sum, i;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%d",&n)== 1) {
        if(n==0) break;
        sum = 0;
        for(i = 1; i <= n / 2; i++) {
            if(n % i == 0) {
                sum += i;
            }
        }
        if(sum>n) printf("%5d  ABUNDANT\n",n);
        else if(sum == n) printf("%5d  PERFECT\n",n);
        else printf("%5d  DEFICIENT\n",n);
    }
    printf("END OF OUTPUT\n");

    return 0;
}
