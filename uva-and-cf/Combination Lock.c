#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int numberOfDisks,minmoves = 0,i,temp;

    scanf("%d",&numberOfDisks);

    char presentFormat[numberOfDisks];
    char finalFormat[numberOfDisks];

    scanf("%s",&presentFormat);
    scanf("%s",&finalFormat);
    //gets(presentFormat);
    //printf("%s\n",presentFormat);
    //gets(finalFormat);
    //printf("%s\n",finalFormat);

    for(i=0;i<numberOfDisks;i++)
    {
        //printf("%d %d\n",presentFormat[i],finalFormat[i]);
        temp = abs(presentFormat[i] - finalFormat[i]);
        //printf("%d\n",temp);
        if(temp>5)
        {
            minmoves += 10 - abs(presentFormat[i] - finalFormat[i]);
            //printf("ifminmoves = %d\n",minmoves);
            continue;
        }

        minmoves += temp;
    }

    printf("%d\n",minmoves);
}
