#include<stdio.h>

int main()
{
    int count = 0,i;
    float num[6];
    for(i =0 ;i < 6; i++) {
        scanf("%f",&num[i]);

        if(num[i] > 0.00 ) {
            count = count + 1;
        }
    }
    printf("%d valores positivos\n",count);

    return 0;
}


