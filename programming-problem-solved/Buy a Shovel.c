#include<stdio.h>

int main()
{
    int k,n;
    int i=1;

    scanf("%d%d",&k,&n);
    while(1) {
        if((k*i)%10==0) {
            printf("%d\n",i);
            break;
        } else if(((k*i)-n)%10==0) {
            printf("%d\n",i);
            break;
        }
        i++;
    }

    return 0;
}
