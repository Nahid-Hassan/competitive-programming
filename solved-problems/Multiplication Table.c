#include<stdio.h>

int main()
{
    int row,colum,count=0,i;

    scanf("%I64d%I64d",&row,&colum);

    for(i=2;i<=row;i++)
    {
        if(colum%i==0) {
            count++;
        }
    }
    printf("%d\n",count);

    return 0;
}
