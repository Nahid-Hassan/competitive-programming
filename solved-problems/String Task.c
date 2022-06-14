#include<stdio.h>

int main()
{
    char s[110];
    int i,len;

    gets(s);
    len = strlen(s);

    for(i=0;i<len;i++)
    {
        if(s[i]>='a' && s[i]<= 'z')
        {
            if(s[i]=='a'||s[i]=='o'||s[i]=='y'||s[i]=='e'||s[i]=='u'||s[i]=='i') //"A", "O", "Y", "E", "U", "I"
            continue;
            else printf(".%c",s[i]);
        }
        if(s[i]>='A' && s[i]<= 'Z')
        {
            if(s[i]=='A'||s[i]=='O'||s[i]=='Y'||s[i]=='E'||s[i]=='U'||s[i]=='I') //"A", "O", "Y", "E", "U", "I"
            continue;
            else printf(".%c",s[i]+32);
        }
    }
    printf("\n");

}
