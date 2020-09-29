#include<stdio.h>

int main()
{
    int i,n;

    scanf("%d",&n);

    for(i=1;i<=n-1;i++)
    {
        if(i%2 !=0) printf("I hate that ");
        else printf("I love that ");
    }
    if(i%2==0) printf("I love it");
    else printf("I hate it");
    printf("\n");
}
