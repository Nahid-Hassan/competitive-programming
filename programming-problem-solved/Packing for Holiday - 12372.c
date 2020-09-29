#include<stdio.h>

int main()
{
    int l,w,h;
    int testCase;
    scanf("%d",&testCase);
    int i = 0;

    while(testCase--)
    {
        i++;
        scanf("%d%d%d",&l,&w,&h);

        if(l>20 || w>20 || h>20) printf("Case %d: bad\n",i);
        else printf("Case %d: good\n",i);
    }

    return 0;
}
