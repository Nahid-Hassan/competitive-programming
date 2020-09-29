#include<stdio.h>

int main()
{
    int levels,tryLevelEachPerson,i,temp;
    int count=0;

    scanf("%d",&levels);
    scanf("%d",&tryLevelEachPerson);

    int completeLevelEachPerson[tryLevelEachPerson*2];

    for(i=0;i<tryLevelEachPerson*2;i++)
    {
        scanf("%d",&completeLevelEachPerson[i]);
    }
    temp = completeLevelEachPerson[0];
    for(i=1;i<tryLevelEachPerson*2;i++)
    {
        if(temp != completeLevelEachPerson[i])
        {
            count++;
        }
        //temp = completeLevelEachPerson[i];
    }
    printf("%d\n",count);
    return 0;
}
