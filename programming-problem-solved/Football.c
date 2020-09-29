#include<stdio.h>

int main()
{
    int i,countZero=0,countOne = 0;
    char ballPass[110];
    int stringLength;

    gets(ballPass);

    stringLength = strlen(ballPass);

    for(i=0;i<stringLength;i++)
    {
        if(ballPass[i]== '0')
        {
            countZero++;
            countOne = 0;
            if(countZero>=7) break;
            continue;
        }
        countZero = 0;
        if(ballPass[i]=='1')
        {
            countOne++;
            if(countOne>=7) break;
            continue;
        }
    }
    if(countZero >= 7 || countOne >= 7) printf("YES\n");
    else printf("NO\n");

    return 0;
}
