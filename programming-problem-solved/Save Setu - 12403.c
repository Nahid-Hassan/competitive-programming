#include<stdio.h>

int main()
{
    char string[20];
    int denoteAmount, participent;


    scanf("%d",&participent);

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

    return 0;
}
