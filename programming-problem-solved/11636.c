#include<stdio.h>

int main()
{
    int N,a=1;

    scanf("%d",&N);

    while(N > 0)
    {
        int sum = 1,count = 0;
        while(sum<N)
        {
            sum+=sum;
            count++;
        }
        printf("Case %d: %d\n",a,count);
        scanf("%d",&N);
        a++;
    }

    return 0;
}
