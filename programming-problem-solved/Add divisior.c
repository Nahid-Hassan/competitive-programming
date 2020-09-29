#include<stdio.h>
#include<math.h>

int main()
{
    int testCase,i,j,number,sum=0;

    scanf("%d",&testCase);

    for(i=1;i<=testCase;i++)
    {
        scanf("%d",&number);
        sum = 0;
        for(j=1;j<=number/2;j++)
        {
            if(number%j==0) sum+=j;
        }
        printf("%d\n",sum);
    }
    return 0;
}
