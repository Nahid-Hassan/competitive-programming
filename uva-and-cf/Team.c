#include<stdio.h>

int main()
{
    int testCase,num[3],i,count=0;
    int finalCount=0,j;

    scanf("%d",&testCase);
    //printf("%d",testCase);

    for(i=1;i<=testCase;i++)
    {
        count = 0;
        //printf("%d",count);
        for(j=0;j<3;j++)
        {
            scanf("%d",&num[j]);

            if(num[j] == 1) {
                count++;
            }
        }
        //printf("%d\n",count);
        if(count>=2)
        {
            finalCount++;
        }
    }
    printf("%d\n",finalCount);
}
