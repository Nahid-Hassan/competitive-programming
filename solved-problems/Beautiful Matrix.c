#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int matrix[5][5];
    int i,j,indexOfI=0,indexOfJ=0,needMoves=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&matrix[i][j]);

            if(matrix[i][j] == 1) {
                indexOfI = i;
                indexOfJ = j;
            }
        }
    }
    needMoves = abs(2-indexOfI) + abs(2-indexOfJ);

    printf("%d\n",needMoves);
}
