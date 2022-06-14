#include<stdio.h>

int main()
{
    int days,year,year_ob,month,day;

    scanf("%d",&days);

    year = days/365;
    year_ob = days%365;
    month = year_ob/30;
    day = year_ob%30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",year,month,day);

    return 0;
}











