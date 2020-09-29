#include<stdio.h>

int main()
{
    int testCase,n,i;
    scanf("%d",&testCase);

    for(i=1;i<=testCase;i++)
    {
        int count = 0;
        scanf("%d",&n);
        while(n)
        {
            if(n%2!=0)
            {
                count++;
            }
             n = n/2;
        }
        if(count%2!=0) printf("Case %d: odd\n",i);
        else printf("Case %d: even\n",i);
    }

    return 0;
}
