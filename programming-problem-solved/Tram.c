#include<stdio.h>

int main()
{
    int stops, exitsPassenger, enterPassenger;
    int i, capacityOfTheTram = 0,passengerInsideTram=0;

    scanf("%d",&stops);

    scanf("%d%d",&exitsPassenger,&enterPassenger);

    passengerInsideTram += enterPassenger;
    capacityOfTheTram += passengerInsideTram;

    for(i=2;i<=stops;i++)
    {
        scanf("%d%d",&exitsPassenger,&enterPassenger);

        capacityOfTheTram += (-exitsPassenger + enterPassenger) ;

        if(i>=2) {
            if(capacityOfTheTram > passengerInsideTram) {
                passengerInsideTram = capacityOfTheTram;
            }
        }
    }
    printf("%d\n",passengerInsideTram);
}




