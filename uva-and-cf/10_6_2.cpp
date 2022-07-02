#include<stdio.h>
#include<string.h>
#include<math.h>

#define Pi 2*acos(0.0)

int main()
{
    int tc;
    double b,c,r = 0,w = 0,g,l;
    scanf("%d",&tc);
    while(tc--)
    {
       scanf("%lf",&l);
       r=l/5;
       w=(l*6)/10;
       r=Pi*r*r;
       g=(l*w)-r;
       printf("%.2lf %.2lf\n",r,g);
    }
    return 0;
}
