#include<stdio.h>

int main()
{
    int testCase,i,j,temp=0,s=0,antemp=0;

    scanf("%d",&testCase);

    for(i=0;i<testCase;i++)
    {
        temp = 0;
        antemp = 0;
        int n;
        scanf("%d",&n);
        int bill[n];

        for(j=0;j<n;j++)
        {
            scanf("%d",&bill[j]);
            s = bill[j];
            while(bill[j]>=0)
            {
                bill[j] = bill[j] - 60;
                temp +=15;
            }
            while(s>=0)
            {
                s = s-30;
                antemp+=10;
            }
        }
        if(temp<antemp) printf("Case %d: Juice %d\n",i+1,temp);
        else if(temp>antemp) printf("Case %d: Mile %d\n",i+1,antemp);
        else if(temp == antemp) printf("Case %d: Mile Juice %d\n",i+1,temp);

    }


    return 0;
}
