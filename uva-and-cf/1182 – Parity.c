#include<stdio.h>

int main()
{
    int n,T,count = 0,i ,j;

    scanf("%d",&T);

    for(j=1;j<=n;j++)
    {
        scanf("%d",&n);
        for(i=1;n>0;i++)
        {
            n = n % 2;
            if(n==1) count++;
            n = n / 10;
        }
        if(count%2 == 0) printf("Case %d: even\n",j);
        else if(count%2 != 0) printf("Case %d: odd\n",j);
    }
    //if(count%2==0) printf("")
}
