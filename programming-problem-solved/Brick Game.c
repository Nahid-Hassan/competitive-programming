#include<stdio.h>

int main()
{
    int testCase, n, casen, i;

    scanf("%d",&testCase);

    for(casen = 1; casen <= testCase; ++casen) {
        scanf("%d",&n);
        int ageNPlayers[n];

        for(i = 0; i < n; i++) {
            scanf("%d",&ageNPlayers[i]);
        }
        int z = n/2;
        printf("Case %d: %d\n",casen,ageNPlayers[z]);
    }

    return 0;
}
