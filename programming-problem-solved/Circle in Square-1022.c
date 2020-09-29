#include<stdio.h>
#define pi 2 * acos (0.0)
int main()
{
    int T,i;
    double area,R;

    scanf("%d",&T);

    for(i=1;i<=T;i++)
    {
        scanf("%lf",&R);
        area = (4-pi)*R*R;
        printf("Case %d: %.2lf\n",i,area);
    }

}
