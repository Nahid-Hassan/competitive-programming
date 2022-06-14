#include<stdio.h>
#include<string.h>

int main()
{
    int i, j, White = 0, Black = 0;
    char ch[8][8];

    for(i = 0; i < 8; i++) {
        for(j = 0; j < 8; j++) {
            scanf("%c",&ch[i][j]);
            if(ch[i][j] != '.') {
                if(ch[i][j]=='Q') White += 9;
                else if(ch[i][j]=='q') Black += 9;
                else if(ch[i][j]=='R') White += 5;
                else if(ch[i][j]=='r') Black += 5;
                else if(ch[i][j]=='B' || ch[i][j]=='N') White += 3;
                else if(ch[i][j]=='b' || ch[i][j]=='n') Black += 3;
                else if(ch[i][j]=='P') White += 1;
                else if(ch[i][j]=='p') Black += 1;
            }
        }
        getchar();
    }
    if(White > Black) printf("White\n");
    else if(White == Black) printf("Draw\n");
    else printf("Black\n");

    return 0;
}
