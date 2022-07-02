#include<stdio.h>

int main()
{
    int a,b,c,testCase;

    scanf("%d",&testCase);

    while(testCase--)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a+b>c && b+c>a && c+a>b) printf("OK\n");
        else printf("Wrong!!\n");
    }

    return 0;
}
