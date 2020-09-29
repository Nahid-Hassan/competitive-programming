#include<stdio.h>
#include<math.h>

int main()
{
    int testCase, i;
    int Ox,Oy,Ax,Ay,Bx,By;
    double OA,OB,AB,angle;

    scanf("%d",&testCase);

    for(i=1;i<=testCase;i++)
    {
        scanf("%d%d%d%d%d%d",&Ox,&Oy,&Ax,&Ay,&Bx,&By);
            AB = sqrt(pow(Ax-Bx,2)+pow(Ay-By,2));
            OB = sqrt(pow(Ox-Bx,2)+pow(Oy-By,2));
            OA= OB;
            angle = acos((OB*OB + OA*OA-AB*AB)/(2*OB*OA));
            printf("Case %d: %f\n",i,(double)OB*angle);
    }

    return 0;
}


