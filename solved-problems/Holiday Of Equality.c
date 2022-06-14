#include<stdio.h>

int main()
{
    int i,n;
    int temp = -10;
    long int sum = 0;
    scanf("%d",&n);

    int in[n];

    for(i=0;i<n;i++) {
        scanf("%I64d",&in[i]);
        if(in[i]>=temp) {
            temp = in[i];
        }
    }
    for(i=0;i<n;i++) {
        sum += (temp-in[i]);
    }

    printf("%ld\n",sum);

    return 0;
}
