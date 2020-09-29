#include<stdio.h>
#include<string.h>

int main()
{
    char ch[3];
    int i = 0,count = 0,len=0;
    gets(ch);
    len = strlen(ch);
    while(len--) {
        if(ch[i]=='o')count++;
        i++;
    }
    printf("%d\n",(700+(count*100)));

    return 0;
}
