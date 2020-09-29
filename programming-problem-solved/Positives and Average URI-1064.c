
#include<stdio.h>

int main()
{
    int count = 0,i;
    float num[6],sum;
    for(i =0 ;i < 6; i++) {
        scanf("%f",&num[i]);

        if(num[i] > 0.00 ) {
            count = count + 1;
            sum = sum + num[i];
        }
    }
    printf("%d valores positivos\n%.1f\n",count,(sum/(float)count));

    return 0;
}


