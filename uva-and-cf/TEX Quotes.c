#include<stdio.h>
#include<string.h>

int main()
{
    char s[100000];
    long i,slen,c=0;

    while(gets(s))
    {
        slen=strlen(s);
        for(i = 0; i < slen; i++)
        {
            if(s[i] == '"')
            {
                c = c + 1;
                if(c%2 == 1)
                printf("``");
                else
                printf("''");
            }
            else
            printf("%c",s[i]);
        }
        printf("\n");

    }
    return 0;
}
