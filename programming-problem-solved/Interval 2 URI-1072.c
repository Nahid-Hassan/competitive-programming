#include<stdio.h>

int main()
{
    int n,num,i,incount = 0, outcount=0;

    scanf("%d",&n);

    for(i=1;i<=n;i++) {
        scanf("%d",&num);

        if(num>=10 && num<=20) {
            incount++;
            continue;
        }
        outcount++;
    }

    printf("%d in\n%d out\n",incount,outcount);

    return 0;
}
