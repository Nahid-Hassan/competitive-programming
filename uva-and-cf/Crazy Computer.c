#include<stdio.h>

int main()
{
    int n, c;

    scanf("%I64d%I64d",&n,&c);

    int a[n];
    long int i, count = 0;
    if(n==1) {
        scanf("%I64d",&a[0]);
        printf("1\n");
        return 0;
    }
    else {
        for(i = 0; i < n; i++) {
            scanf("%I64d",&a[i]);
            if(i==0) continue;
            else {
                if((a[i]-a[i-1]) <= c) count++;
                else count = 0;
            }
        }
    }
    printf("%ld\n",count+1);


    return 0;
}
