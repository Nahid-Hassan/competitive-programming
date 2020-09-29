#include<stdio.h>

int main()
{
    int testCase,i;
    char string[20];
    int denoteAmount, participent;


    scanf("%d",&testCase);

    for(i=1;i<=testCase;i++)
    {
        scanf("%d",&participent);

        printf("Case %d:\n",i);

        int totalAmount = 0;

        while(participent--)
        {
            scanf("%s",string);

            if(string[0] == 'd')
            {
                scanf("%d",&denoteAmount);
                totalAmount +=denoteAmount;
            }
            else printf("%d\n",totalAmount);
        }

    }
    return 0;
}
