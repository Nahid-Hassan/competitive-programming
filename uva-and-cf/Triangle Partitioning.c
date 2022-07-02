#include<stdio.h>
#include<math.h>
int main()
{
    int i,testCase;
    double AB, AC, BC,ratio,DE;
    scanf("%d",&testCase);

    for(i=1;i<=testCase;i++)
    {
        scanf("%lf%lf%lf%lf",&AB,&AC,&BC,&ratio);

        DE = sqrt(ratio/(1+ratio))*BC;

        printf("Case %d: %.10lf\n",i,DE);
    }

    return 0;
}
