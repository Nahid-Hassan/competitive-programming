#include<stdio.h>

int main()
{
    int temp,i,no,sum=0;

    while(1)
    {
        scanf("%d",&no);
        if(no==0) break;
        sum = 0;
        while(no>=3)
        {
            sum = sum + (no/3);
            no = (no/3)+no%3;
        }
        if(no==2)
        printf("%d\n",sum+1);
        else printf("%d\n",sum);
    }

    return 0;
}
/*
include<stdio.h>

int main()
{
    int a,b,sum=0;

    scanf("%d%d",&a,&b);
    sum = sum + a;
    while(a>=b)
    {
        sum = sum + (a / b);
        a = (a / b)+ a%b ;

    }
    printf("%d\n",sum);

    return 0;
}
*/
