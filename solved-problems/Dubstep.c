#include<stdio.h>

int main()
{
    char* wubString;
    int i,stringLength;
    scanf("%c",&wubString);
    printf("%s\n",wubString);

    stringLength = strlen(wubString);

    for(i=0;i<stringLength;i++)
    {
        if(wubString[i] != 'W')
        {
            printf("%c",wubString[i]);
        }
        else if(wubString[i] == 'W') i = i+2;
    }
}
