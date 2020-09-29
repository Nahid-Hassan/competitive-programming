#include<stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);

    if(n%2==0)
    {
        printf("%d\n",n/2);
        for(i=1;i<=n/2;i++)
        {
            printf("%d ",2);
        }
        printf("\n");
    } else {
        printf("%d\n",n/2);
        for(i=1;i<=(n/2)-1;i++)
        {
            printf("%d ",2);
        }
        printf("%d\n",3);
    }

    return 0;
}
