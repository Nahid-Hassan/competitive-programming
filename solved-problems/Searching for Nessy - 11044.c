#include<stdio.h>

int main()
{
    int testCase;
    int a,b;

    scanf("%d",&testCase);

    while(testCase--)
    {
        scanf("%d%d",&a,&b);
        printf("%d\n",((a/3)*(b/3)));
    }

    return 0;
}
