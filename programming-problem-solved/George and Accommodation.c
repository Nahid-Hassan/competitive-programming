#include<stdio.h>

int main()
{
    int total_room,count = 0,i, currentRoomMember, border;

    scanf("%d",&total_room);

    for(i=1; i<=total_room;i++)
    {
        scanf("%d%d",&currentRoomMember,&border);

        if(currentRoomMember+1<border)
        {
            count++;
        }
    }
    printf("%d\n",count);

    return 0;
}
