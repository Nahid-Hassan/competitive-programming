#include<stdio.h>

int main()
{
    int testCase,numberOfWalls,wallHeight,highJumps,lowJumps,i;
    scanf("%d",&testCase);

    for(i=1;i<=testCase;i++)
    {
        highJumps=lowJumps=0;

        scanf("%d%d",&numberOfWalls,&wallHeight);
        int temp = wallHeight;

        if(numberOfWalls==1) {
            printf("Case %d: %d %d\n",i,highJumps,lowJumps);
            continue;
        }

        while(numberOfWalls-1)
        {
            scanf("%d",&wallHeight);

            if(temp>wallHeight) lowJumps++;
            else if(temp<wallHeight) highJumps++;

            temp = wallHeight;

            numberOfWalls--;
        }
        printf("Case %d: %d %d\n",i,highJumps,lowJumps);
    }

    return 0;
}
