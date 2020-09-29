#include<stdio.h>

int main()
{
    long int N,i;
    int test = 0, output[100];

    while(1)
    {
        test = 0;
        scanf("%ld",&N);
        if(N == -1) break;
        else {
            while(N>0)
            {
                printf("%d\n",N);
                output[test] = N%3;
                N /= 3;
                test++;
                printf("%d %d\n",test,output[test]);
            }
        }
        for(i=test-1;i<=0;i--)
        {
            printf("%d",output[i]);
        }
        printf("\n");
    }
}
