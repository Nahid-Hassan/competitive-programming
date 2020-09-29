#include<stdio.h>

int main()
{
    int problemNumber,time;
    int leftTime=0,i,solveProblem=0;

    scanf("%d%d",&problemNumber,&time);

    leftTime = 240-time;

    for(i=1;i<=problemNumber;i++)
    {
        leftTime -=i*5;
        if(leftTime<0) break;
        else solveProblem++;
    }
    printf("%d\n",solveProblem);
}
