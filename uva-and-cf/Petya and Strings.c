#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char s1[110],s2[110];
    int i,len;
    int s1Total=0,s2Total=0;

    scanf("%s",s1);

    len = strlen(s1);

    scanf("%s",s2);

    for(i=0;i<len;i++)
    {
        if(s1[i] >= 'A' && s1[i] <= 'Z')
        {
            s1[i] = s1[i]+32;
        }
        if(s2[i] >= 'A' && s2[i] <= 'Z')
        {
            s2[i] = s2[i]+32;
        }
        if(s1[i] != s2[i]) {
            if(s1[i] > s2[i]) {
                printf("1\n");
                s1Total = 1;
                break;
            }
            else {
                printf("-1\n");
                s2Total = 1;
                break;
            }
        }
    }
    if(s1Total ==0 && s2Total == 0) printf("0\n");

    return 0;
}
