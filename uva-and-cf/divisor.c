#include<stdio.h>

int main()
{
    int num, i, tempnum, count = 0,test=0;

    scanf("%d",&num);

    tempnum = num;

    while(tempnum>0)
    {
        tempnum =  tempnum/10;           ///digit count
        count++;
    }

    int dnum[count];
    tempnum = num;

    printf("num = %d\n",num);
    for(i=0;i<count;i++)
    {
        dnum[i]= num%10;
        if(tempnum%dnum[i] == 0) {            ///check divisor
            test++;
        }
        num = num/10;
    }
    printf("count = %d & test= %d\n",count,test);
    if(test==count) printf("Yes\n");
}
