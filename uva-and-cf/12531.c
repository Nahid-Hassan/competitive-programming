#include<stdio.h>

int main()
{
    int n;

    while(1==scanf("%d",&n))
    {
        if(n%3==0)printf("Y\n");
        else printf("N\n");
    }

    return 0;
}
