#include<stdio.h>

int main()
{
    int i,testCase,stringLength;
    char word[100];

    scanf("%d",&testCase);

    for(i=0;i<testCase;i++)
    {
        scanf("%s",word);

        stringLength = strlen(word);

        if(stringLength>10)
        {
            printf("%c%d%c\n",word[0],stringLength-2,word[stringLength-1]);
        }
        else {
            printf("%s\n",word);
        }
    }

    return 0;
}
