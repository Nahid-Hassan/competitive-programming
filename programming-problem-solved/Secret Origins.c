#include<stdio.h>

int main()
{
    int testCase, i, number, countOne1, temp;
    int countOne3, j, Temp, anotherTemp;

    scanf("%d",&testCase);

    for(i = 1; i <= testCase; i++)
    {
        countOne1 = 0;
        scanf("%d",&number);
        Temp = number;               //for 2nd for loop

        while(number>0)              //count one and zero
        {
            temp = number%2;           // modulus
            if(temp == 1) countOne1++;
            number = number/2;
        }

        for(j = Temp + 1; j != 0; j++)
        {
            countOne3 = 0;
            anotherTemp = j;

            while(anotherTemp>0)
            {
                temp = anotherTemp%2;
                if(temp == 1) countOne3++;
                anotherTemp = anotherTemp/2;
            }
            if(countOne1 == countOne3)
            {
                printf("Case %d: %d\n",i,j);
                break;
            }
        }
    }


    return 0;
}
/*
#include<stdio.h>

int main()
{
    int testCase,i,number,countOne1,countZero2,temp;
    int countOne3,countZero4,j,Temp,anotherTemp;

    scanf("%d",&testCase);

    for(i=1;i<=testCase;i++)
    {
        countOne1 = 0;
        countZero2 = 0;
        scanf("%d",&number);
        Temp = number;               //for 2nd for loop
        while(number>0)              //count one and zero
        {
            temp = number%2;           // modulus
            if(temp == 1) countOne1++;
            else countZero2++;
            number = number/2;
        }
        //printf("countOne1 = %d & countZero2 = %d\n",countOne1,countZero2);

        for(j=Temp+1;j!=0;j++)
        {
            countOne3 = 0;
            countZero4 = 0;
            anotherTemp = j;

            while(anotherTemp>0)
            {
                temp = anotherTemp%2;
                if(temp == 1) countOne3++;
                else countZero4++;
                anotherTemp = anotherTemp/2;
            }
            //printf("countOne3 = %d & countZero4 = %d\n",countOne3,countZero4);
            if((countOne1 <= countOne3) && (countZero2 <= countZero4))
            {
                printf("Case %d: %d\n",i,j);
                break;
            }
        }
    }


    return 0;
}
*/
