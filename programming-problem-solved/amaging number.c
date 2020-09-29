#include<stdio.h>

int main()
{
    int number, i, count = 0;

    scanf("%d",&number);

    for(i=2;i<=number-1;i++)
    {
        if(number%i==0)
        count++;
        if(count>3) break;
    }

    if(count == 3 ) printf("Amazing Number\n");
    else printf("Not amazing number\n");

    return 0;
}
