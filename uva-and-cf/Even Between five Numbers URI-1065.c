#include<stdio.h>

int main()
{
    int num[5], count = 0,i;
    for(i =0 ;i < 5; i++) {
        scanf("%d",&num[i]);

        if(num[i] % 2 ==0 ) {
            count = count + 1;
        }
    }
    printf("%d valores pares\n",count);

    return 0;
}


