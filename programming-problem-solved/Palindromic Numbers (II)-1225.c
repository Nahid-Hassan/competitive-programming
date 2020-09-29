#include<stdio.h>
#include<string.h>

int main()
{
    int testCase,i,j;
    char s[20],str[20];
    int sLength;

    scanf("%d",&testCase);

    for(i=1;i<=testCase;i++)
    {
        ///input number as  a string
        scanf("%s",s);

        sLength = strlen(s);

        ///str----reverse
        j=0;
        while(sLength--)
        {
            str[j] = s[sLength];
            j++;
        }
        ///assign str str[j] = '\0'
        str[j] = '\0';
        ///string compare
        if(strcmp(s,str)==0) printf("Case %d: Yes\n",i);
        else printf("Case %d: No\n",i);
    }
}
