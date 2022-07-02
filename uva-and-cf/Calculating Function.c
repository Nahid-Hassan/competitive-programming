#include<stdio.h>

int main()
{
    long long int positiveNumber;

    scanf("%I64d",&positiveNumber);

    if(positiveNumber%2==0) {
        printf("%lld\n",positiveNumber/2);
    }else {
        printf("%lld\n",-(positiveNumber+1)/2);
    }

    return 0;
}
