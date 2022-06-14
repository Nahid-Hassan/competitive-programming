#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,n,worstCount=0,progressCount = 0,temp,worstTemp;

    scanf("%d",&n);

    int contestPerformence[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&contestPerformence[i]);

        if(i==0) {
            temp = contestPerformence[0];
            worstTemp = contestPerformence[0];
            continue;
        }
        if(i>0) {
            if(worstTemp>contestPerformence[i]) {
                worstTemp = contestPerformence[i];
                worstCount++;
                continue;
            }
        }
        if(i>0) {
            if(temp < contestPerformence[i]) {
                progressCount++;
                temp = contestPerformence[i];
                continue;
            }
        }
    }
    printf("%d\n",(progressCount+worstCount));

}
