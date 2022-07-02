#include<stdio.h>

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
