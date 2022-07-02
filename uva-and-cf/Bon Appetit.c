#include<stdio.h>

int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int bill[n],b;
    int i = 0,total = 0;
    for(i=0;i<n;i++) {
        scanf("%d",&bill[i]);
        if(i!=k) total += bill[i];
    }
    scanf("%d",&b);
    if((total/2)==b) printf("Bon Appetit\n");
    else printf("%d\n",b-(total/2));

    return 0;
}
