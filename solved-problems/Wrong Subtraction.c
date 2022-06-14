#include<stdio.h>

int main()
{
    long int n,k;
    scanf("%ld%ld",&n,&k);

    while(k--) {
        if(n%10==0) {
            n = n / 10;
        } else n-=1;
    }
    printf("%ld\n",n);


    return 0;
}
/*
    if
*/
