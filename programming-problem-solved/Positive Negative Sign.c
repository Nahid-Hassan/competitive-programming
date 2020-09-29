#include<stdio.h>

int main()
{
    long long int n,m,sum=0,i;
    int testCase;

    scanf("%d",&testCase);

    for(i=1;i<=testCase;i++)
    {
        scanf("%lld%lld",&n,&m);
        sum = (n/2)*m;
        printf("Case %d: %lld\n",i,sum);
    }

    return 0;
}
