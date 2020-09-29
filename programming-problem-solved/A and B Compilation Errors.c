#include<stdio.h>

int main()
{
    int n;   /*n = initial Number Of Compilation Errors*/
    scanf("%d",&n);
    long int errors[n],i,total=0,ans1=0,ans2=0;

    for(i=0;i<n;i++)
    {
        scanf("%I64d",&errors[i]);
        total += errors[i];
    }
    for(i=0;i<n-1;i++)
    {
        scanf("%I64d",&errors[i]);
        ans1 += errors[i];
    }
    printf("%d\n",total-ans1);
    for(i=0;i<n-2;i++)
    {
        scanf("%I64d",&errors[i]);
        ans2 += errors[i];
    }
    printf("%d\n",ans1-ans2);

    return 0;
}
