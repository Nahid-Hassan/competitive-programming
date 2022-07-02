#include<stdio.h>

int main()
{
    int n,i,j;

    scanf("%d",&n);
    j=n;
    if(n%2==0) {
            j = n + 1;
        }

    for(i=n,j;i<=n+5;i++,j=j+2) {
        printf("%d\n",j);
    }

    return 0;
}
