#include<stdio.h>
#include<math.h>

int main()
{
    int testCase,nParkingSlot;
    int i,temp,j;

    scanf("%d",&testCase);

    while(testCase--)
    {
        scanf("%d",&nParkingSlot);
        int total = 0;
        int slot[nParkingSlot];

        for(i=0;i<nParkingSlot;i++) scanf("%d",&slot[i]);

        for(i=0;i<nParkingSlot;i++)
        {
            for(j=i+1;j<nParkingSlot;j++)
            {
                if(slot[i]>slot[j]) {
                    temp = slot[i];
                    slot[i] = slot[j];
                    slot[j] = temp;
                }
            }

        }
        for(i=0;i<nParkingSlot-1;i++)
        {
            total += abs(slot[i]-slot[i+1]);
        }
        printf("%d\n",total*2);
    }

    return 0;
}
/**
    Simulate:

    24   13  89  37
    after sorting  = 13 24 37 89

    abs(13-24) + abs(24-37) + abs(37 - 89) => 76
                                           => 76 * 2
                                           => 152


    7 30 41 14 39 42
    ater sorting = 7 14 30 39 41 42

    abs(7-14) + abs(14-37) + abs(37-39) + abs(39-41) + abs(41-42) => 35
                                                                  => 35 * 2
                                                                  => 70
**/
