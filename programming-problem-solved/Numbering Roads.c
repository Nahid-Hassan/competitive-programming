#include<stdio.h>

int main()
{
    int R, N;
    int casen = 0;

    while(scanf("%d%d",&R,&N) && R) {
        casen++;
        if((R - 1) / N <= 26) printf("Case %d: %d\n",casen,(R - 1) / N);
        else printf("Case %d: impossible\n",casen);
    }

    return 0;
}
