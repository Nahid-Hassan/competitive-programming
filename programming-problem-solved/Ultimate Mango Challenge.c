#include<stdio.h>

int main()
{
    int testCase,l,n,totalMango=0;
    int count,i,j;
    int mangoType[20],eatingMangoLimit[30];
    scanf("%d",&testCase);

    for(j=1;j<=testCase;j++)
    {
        count = 0;
        totalMango = 0;
        scanf("%d%d",&n,&l);
        for(i=0;i<n;i++)
        {
            scanf("%d",&mangoType[i]);
        }
        for(i=0;i<n;i++)
        {
            scanf("%d",&eatingMangoLimit[i]);
            if(mangoType[i] <= eatingMangoLimit[i])
            {
                totalMango += mangoType[i];
            }
            else if(mangoType[i] >= eatingMangoLimit[i])
            {
                totalMango += eatingMangoLimit[i];
            }
        }
        if(totalMango > l)
        {
            printf("Case %d: No\n",j);
            continue;
        }
        for(i=0;i<n;i++)
        {
            if(mangoType[i] <= eatingMangoLimit[i])
            {
                count++;
            }
        }
        if(count == n) printf("Case %d: Yes\n",j);
        else printf("Case %d: No\n",j);
    }

}
