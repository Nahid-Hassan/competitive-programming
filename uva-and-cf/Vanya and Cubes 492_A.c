#include<stdio.h>

int main()
{
    int nCubes,sum=1;
    int height=0;
    int a=2;
    scanf("%d",&nCubes);
    int temp = 0;
    while(nCubes)
    {
        if(nCubes < temp) break;
        nCubes = nCubes-sum;
        height++;
        sum = sum + a;
        a++;
        temp = sum;
    }
    printf("%d\n",height);
}



/*
#include<stdio.h>

int main()
{
    int nCubes,i=1,sum=0;
    int height=0;
    scanf("%d",&nCubes);
    sum = i;
    i=0;
    while(nCubes)
    {
        //printf("%d & %d & %d & %d\n",i,sum,nCubes,height);
        i++;
        if(nCubes<i) break;
        nCubes = nCubes-sum;
        height++;
        sum +=i;
        //printf("%d & %d & %d & %d\n",i,sum,nCubes,height);
    }
    printf("%d\n",height);
}
*/





/*
#include<stdio.h>

int main()
{
    int numberOfCubes,i,sum=0,temp=0,count=0;

    scanf("%d",&numberOfCubes);

    for(i=1;i<=numberOfCubes;i++)
    {
        sum += i;
        temp = numberOfCubes - sum;

        if(temp>=0)
        {
            count++;
            continue;
        }


    }
}
*/
