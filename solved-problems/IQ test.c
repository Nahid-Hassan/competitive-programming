#include<stdio.h>

int main()
{
    int testCase,i,number,evenTemp,oddTemp;
    int count=0;
    scanf("%d",&testCase);
    scanf("%d",&number);

    if(number%2==0) evenTemp = number;
    else oddTemp = number;


    for(i=2;i<=testCase;i++)
    {
        scanf("%d",&number);
        if(evenTemp%2==0 && (number%2==0))
        {
        }
        else if(oddTemp%2!=0 && (number%2!=0))
        {
        }
        else printf("%d\n",i);
    }


}
/*

        if(number%2!=0)
        {
            count++;
            printf("%d\n",i);
            break;
        }
*/
