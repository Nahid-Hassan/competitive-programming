#include<stdio.h>

int main()
{
    int redSocks,blueSocks;
    int min=0,max=0;

    scanf("%d%d",&redSocks,&blueSocks);

    if(redSocks >= blueSocks)
    {
        max = redSocks;
        min = blueSocks;

        printf("%d %d\n",min,(max-min)/2);
    }
    else if(redSocks <= blueSocks)
    {
        max = blueSocks;
        min = redSocks;

        printf("%d %d\n",min,(max-min)/2);
    }

}
