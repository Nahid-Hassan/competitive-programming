#include<stdio.h>

int main()
{
    int t,numberOfPlayers,kPlayer,numberOfPasses,i;

    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d",&numberOfPlayers,&kPlayer,&numberOfPasses);

        if(kPlayer+numberOfPasses>numberOfPlayers) {
            int check = (kPlayer+numberOfPasses)/numberOfPlayers;
            int mod = (kPlayer+numberOfPasses)%numberOfPlayers;

            if(mod == 0) printf("Case %d: %d\n",i,(kPlayer+numberOfPasses)-((check-1)*numberOfPlayers));
            else printf("Case %d: %d\n",i,(kPlayer+numberOfPasses)-(check*numberOfPlayers));
        }
        else if(kPlayer+numberOfPasses==numberOfPlayers) {
            printf("Case %d: %d\n",i,numberOfPlayers);
        }
        else printf("Case %d: %d\n",i,kPlayer+numberOfPasses);
    }

    return 0;
}
