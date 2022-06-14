#include<stdio.h>

int main()
{
    int t;
    int i,j;
    int c,temp;
    int N;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&N);
        temp =0;
        for(j=1;j<=N;j++)
        {
            scanf("%d",&c);
            if(temp<=c)
            {
                temp = c;
            }

        }
        printf("Case %d: %d\n",i,temp);
    }

    return 0;
}
