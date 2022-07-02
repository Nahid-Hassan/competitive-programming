#include<stdio.h>

int main()
{
    int employeeNumber,i;
    int temp,test =0;

    scanf("%d",&employeeNumber);

    temp = employeeNumber/2;

    for(i=2;i<=temp;i++)
    {
        if(employeeNumber%i ==0 )
        {
            test++;
        }
    }
    printf("%d",test+1);

}
