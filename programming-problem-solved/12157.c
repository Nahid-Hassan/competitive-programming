
#include<stdio.h>

int main()
{
    int testCase,i,j,temp=0,s=0,antemp=0;
    int M;
    scanf("%d",&testCase);

    for(i=0;i<testCase;i++)
    {
        temp = 0;
        antemp = 0;
        int n;
        scanf("%d",&n);

        for(j=0;j<n;j++)
        {
            scanf("%d",&M);
            temp += (M/60+1)*15;
            antemp += (M/30+1)*10;
        }
        if(temp<antemp) printf("Case %d: Juice %d\n",i+1,temp);
        else if(temp>antemp) printf("Case %d: Mile %d\n",i+1,antemp);
        else if(temp == antemp) printf("Case %d: Mile Juice %d\n",i+1,temp);

    }


    return 0;
}
