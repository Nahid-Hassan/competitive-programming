#include<stdio.h>

int main()
{
    int n,k,i,count=0;

    scanf("%d%d",&n,&k);

    int participentInfo[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&participentInfo[i]);

        participentInfo[i] +=k;

        if(participentInfo[i]<=5) count++;
    }
    printf("%d\n",count/3);
}
