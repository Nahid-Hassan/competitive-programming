#include<stdio.h>

int main()
{
    int testCase,i;

    scanf("%d",&testCase);

    int num[testCase],sum=0;

    for(i=0;i<testCase;i++)
    {
        scanf("%d",&num[i]);
        sum = sum + num[i];
    }
    printf("%d\n",sum);
}
