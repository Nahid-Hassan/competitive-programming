#include<stdio.h>

int main()
{
    int i, j;
    int m, n;
    scanf("%d%d",&m,&n);

    for(i=1;i<=m;i++) {
        for(j=1;j<=n;j++) {
           if(i%2!=0) printf("#");
           else {
                if(i%2==0 && j==n && i%4!=0) printf("#");
                else if(i%4==0 && j==1) printf("#");
                else printf(".");
           }
        }
        printf("\n");
    }

    return 0;
}
