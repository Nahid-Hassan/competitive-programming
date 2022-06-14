#include<stdio.h>

int main()
{
    int numberOfSet,i,avg,sum=0,a=0;

    while(1==scanf("%d",&numberOfSet))
    {
        a++;

        if(numberOfSet==0) return 0;

        int height[numberOfSet];

        for(i=0;i<numberOfSet;i++)
        {
            scanf("%d",&height[i]);
            sum += height[i];
        }

        avg = sum/numberOfSet;

        sum = 0;

        for(i=0;i<numberOfSet;i++)
        {
            if(height[i]>avg) sum += height[i]-avg;
        }

        printf("Set #%d\nThe minimum number of moves is %d.\n",a,sum);
    }

    return 0;
}
