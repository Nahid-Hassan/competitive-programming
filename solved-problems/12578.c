#include<stdio.h>
#include<math.h>
#define PI 2*acos(0.0)

int main()
{
    int testCase,i;
    double length,R,circleArea;

    scanf("%d",&testCase);

    for(i=1;i<=testCase;i++)
    {
        scanf("%lf",&length);

        R = length/5.0;
        circleArea = (PI*R*R);

        printf("%.2lf  %.2lf\n",circleArea,((length*length*.6)-circleArea));
    }

    return 0;
}
