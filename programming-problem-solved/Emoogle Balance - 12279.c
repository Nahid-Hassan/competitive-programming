#include<stdio.h>

int main()
{
    int testCase,N,i=0;

    while(1 == scanf("%d",&testCase),testCase!=0)
    {
        int treatGiven = 0, treatGiving = 0;
        i++;
        while(testCase--)
        {
            scanf("%d",&N);
            if(N==0) treatGiven++;
            else treatGiving++;
        }
        printf("Case %d: %d\n",i,(treatGiving-treatGiven));
    }

    return 0;
}
/**
    A value between 1 and 99 means a reason for Emoogle’s giving a treat has occurred
    while a 0 means he has given a treat.
**/
