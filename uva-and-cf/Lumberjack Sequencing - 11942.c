#include<stdio.h>

int main()
{
    int testCase,i;
    scanf("%d",&testCase);

    printf("Lumberjacks:\n");

    int n[10];
    while(testCase--)
    {
        int min = 0,max = 0;
        for(i = 0;i<10;i++)
        {
            scanf("%d",&n[i]);
            if(i>0) {
                if(n[i-1]>n[i]) max++;
                else min++;
            }
        }
        if(min && max) printf("Unordered\n");
        else printf("Ordered\n");

    }

    return 0;
}
