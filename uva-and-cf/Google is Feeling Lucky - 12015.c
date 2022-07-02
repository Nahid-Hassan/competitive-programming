#include<stdio.h>

int main()
{
    int t, i, j, k, max, value[15];
    char url[12][105];
    while(scanf("%d",&t)==1)
    {
        for(i=1;i<=t;i++)
        {
            max=0;
            for(j=1;j<=10;j++)
            {
                scanf("%s%d",&url[j], &value[j]);
                if(value[j]>max)
                    max=value[j];
            }
            printf("Case #%d:\n",i);
            for(k=1;k<=10;k++)
            {
                if(max==value[k])
                    printf("%s\n",url[k]);
            }
        }
    }
    return 0;
}
