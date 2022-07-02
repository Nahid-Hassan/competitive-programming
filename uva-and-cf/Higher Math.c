#include<stdio.h>

int main()
{
    int testCase,angle,a,b,c,i;

    scanf("%d",&testCase);

    for(i=1;i<=testCase;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(c>b && c>a)
        {
            angle = (a*a)+(b*b)-(c*c);
        }
        else if(b>a && b>c)
        {
            angle = (a*a)+(c*c)-(b*b);
        }
        else if(a>c && a>b)
        {
            angle = (c*c)+(b*b)-(a*a);
        }

        if(angle == 0)
        {
            printf("Case %d: yes\n",i);
        }
        else
        {
            printf("Case %d: no\n",i);
        }
    }

    return 0;
}
