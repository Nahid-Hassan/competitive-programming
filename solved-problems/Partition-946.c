#include<stdio.h>

int main()
{
    int number, testCase, i=1;
    int sum = 0;
    scanf("%d",&testCase);

    for(;i<=testCase;i++)
    {
        scanf("%d",&number);

        sum = sum + abs(number);
    }
    printf("%d\n",sum);
}
