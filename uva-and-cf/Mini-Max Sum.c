#include<stdio.h>

int main()
{
    unsigned long long int max, min , sum =0, num[5];
    int i;

    scanf("%lld",&num[0]);

    max = num[0];
    min = num[0];
    sum = sum + num[0];

    for(i=1;i<5;i++)
    {
        scanf("%lld",&num[i]);

        if(max<num[i])
        {
            max=num[i];
        }

        if(min>num[i])
        {
            min=num[i];
        }
        sum=sum+num[i];
    }
    printf("%lld %lld\n",sum-max,sum-min);
}
