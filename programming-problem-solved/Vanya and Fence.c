#include<stdio.h>

int main()
{
    int numberOfFriends,fenceHeight;
    int i,totalWeidth=0;
    int friendsHight;
    scanf("%d%d",&numberOfFriends,&fenceHeight);

    for(i=1;i<=numberOfFriends;i++)
    {
        scanf("%d",&friendsHight);

        if(friendsHight > fenceHeight)
        {
            totalWeidth+=2;
        }
        else totalWeidth+=1;
    }
    printf("%d\n",totalWeidth);
}
