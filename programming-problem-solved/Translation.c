#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int i,stringLength,j,count=0;
    char translate[110];
    char reversTranslate[110];

    gets(translate);
    gets(reversTranslate);

    stringLength = strlen(translate);
    j = stringLength - 1;

    for(i=0,j;i<stringLength;i++,j--)
    {
        if(translate[i] == reversTranslate[j])
        {
            count++;
        }
    }
    if(count == stringLength) printf("YES\n");
    else printf("NO\n");
}
