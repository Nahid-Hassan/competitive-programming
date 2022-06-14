#include<stdio.h>

int main()
{
    int n, i;

    scanf("%d",&n);

    if(1<=n<=1000) {
        for(i=1;i<=n;i = i+ 2) {
            printf("%d\n",i);
        }
    }

    return 0;
}
