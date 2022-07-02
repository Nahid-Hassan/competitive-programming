/*
    up - down per floor 4 second
    it takes 3 seconds to open or close
    you need 5 seconds to enter or exit the lift
*/

#include<stdio.h>

int main()
{
    int test_case, i, my_position, lift_position, time;

    scanf("%d",&test_case);

    if(test_case <= 25)
    {
        for(i=1;i<=test_case;i++)
        {
            scanf("%d%d",&my_position,&lift_position);

            time = ((4*abs(my_position-lift_position))+19+4*(my_position));

            printf("Case %d: %d\n",i,time);
        }
    }

    return 0;
}
