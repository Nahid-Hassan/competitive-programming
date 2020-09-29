#include<stdio.h>

int main()
{
    int testCase,inPercentJuiceVolume;
    double total = 0, avg;
    int i;

    scanf("%d",&testCase);

    for(i=1;i<=testCase;i++)
    {
        scanf("%d",&inPercentJuiceVolume);
        total += inPercentJuiceVolume;
    }
    avg = total/testCase;

    printf("%.12lf\n",avg);
}
