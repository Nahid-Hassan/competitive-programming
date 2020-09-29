#include<stdio.h>

int main()
{
    int first,second,third,fourth;

    scanf("%d%d%d%d",&first,&second,&third,&fourth);

    while(first||second||third||fourth) {
        int sum = ((first - second + 40) % 40 + (third - second + 40) % 40 + (third - fourth + 40) % 40) * 9;
        printf("%d\n",1080+sum);
        scanf("%d%d%d%d",&first,&second,&third,&fourth);
    }

    return 0;
}
//((start - first + 40) % 40 + (second - first + 40) % 40 + (second - third + 40) % 40) * 9);
/**
    Simulation:
    for 0 30 0 30:

        0 - 30 => -30 + 40 => 10 % 40 => 10
        0 - 30 => -30 + 40 => 10 % 40 => 10
        0 - 30 => -30 + 40 => 10 % 40 => 10

        10 + 10 + 10 => 30 * 9 => 270 + 1080(for three turns = 360 * 3 => 1080) => 1350;
**/
