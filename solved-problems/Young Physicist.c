#include<stdio.h>

int main()
{
    int test_case, num,xsum = 0,ysum = 0,zsum = 0,i;

    scanf("%d",&test_case);

    for(i=1;i<=test_case;i++)
    {
        scanf("%d",&num);
        xsum += num;    //xsum = xsum + num;
        scanf("%d",&num);
        ysum += num;
        scanf("%d",&num);
        zsum += num;
    }

    if(xsum ==0 && ysum ==0 && zsum ==0) printf("YES\n");
    else printf("NO\n");
}
