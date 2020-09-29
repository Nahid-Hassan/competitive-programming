#include<stdio.h>

#define MAXF 1000010

long int maxArray[MAXF];

int main()
{
    int testCase, inputNumber, base;

    scanf("%d",&testCase);
}





#include<stdio.h>

int main()
{
    int testCase, number,j,test =0, numberBase,i=0;
    long int total = 1;
    scanf("%d",&testCase);

    for(i=1;i<=testCase;i++)
    {
        total = 1 ;
        test = 0;
        scanf("%d%d",&number,&numberBase);
        if(number == 0 ) total = 1;

        for(j=1;j<=number;j++)
        {
            total = total*j;
        }
        while(total>0)
        {
            total = total/numberBase;
            test++;
        }
        printf("Case %d: %d\n",i,test);
    }

    return 0;

}
