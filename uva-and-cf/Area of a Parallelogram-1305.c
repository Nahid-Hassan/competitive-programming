#include<stdio.h>
#include<math.h>

int main()
{
    int Ax,Ay,Bx,By,Cx,Cy,Dx,Dy,i,areaOfParallelogram,testCase;
    int area1,area2;
    scanf("%d",&testCase);

    for(i=1;i<=testCase;i++)
    {
        scanf("%d%d%d%d%d%d",&Ax,&Ay,&Bx,&By,&Cx,&Cy);

        Dx = (Ax+Cx-Bx);
        Dy = (Ay+Cy-By);

        area1 = sqrt(((Ax-Bx)*(Ax-Bx))-((Ay-By)*(Ay-By)));
        area2 = sqrt(((Ax-Dx)*(Ax-Dx))-((Ay-Dy)*(Ay-Dy)));

        printf("%lf %lf\n",area1,area2);

        areaOfParallelogram =  area1*area2;

        printf("Case %d: %d %d %d\n",i,Dx,Dy,areaOfParallelogram);
    }
}
