#include<stdio.h>

int main()
{
    int testRun;
    scanf("%d",&testRun);
    int m,c,i,mCount = 0,cCount =0;

    for(i=1;i<=testRun;i++) {
        scanf("%d%d",&m,&c);
        if(m>c) mCount++;
        else if(m<c) cCount++;
    }
    if(mCount>cCount) printf("Mishka\n");
    else if(mCount==cCount) printf("Friendship is magic!^^\n");
    else printf("Chris\n");

    return 0;
}
