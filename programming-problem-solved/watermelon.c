#include<stdio.h>

int main()
{
    int weightOfWaterMelon;

    scanf("%d",&weightOfWaterMelon);

    if(weightOfWaterMelon<=2) printf("NO\n");
    else if(weightOfWaterMelon%2 == 0) printf("YES\n");
    else printf("NO\n");

    return 0;
}
