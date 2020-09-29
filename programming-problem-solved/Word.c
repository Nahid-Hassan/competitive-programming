#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char st[110];
    gets(st);
    int i, sLCount = 0, strl;
    char toupper[110],tolower[110];

    strl = strlen(st);

    for(i=0;i<strl;i++) {
        if(st[i]>='a' && st[i] <='z') {
            sLCount++;
            toupper[i] = st[i]-32;
            tolower[i] = st[i];
            /*printf("toupper[%d] = %c & tolower[%d] = %c & st[%d] = %c\n",i,toupper[i],i,tolower[i],i,st[i]);*/
        }
        else if(st[i]>='A' && st[i] <='Z') {
            toupper[i] = st[i];
            tolower[i] = st[i]+32;
            /*printf("toupper[%d] = %c & tolower[%d] = %c & st[%d] = %c\n",i,toupper[i],i,tolower[i],i,st[i]);*/
        }
    }
    if((strl-sLCount)>sLCount) {
        toupper[strl] = '\0';
        printf("%s\n",toupper);
    } else {
        tolower[strl] = '\0';
        printf("%s\n",tolower);
    }

    return 0;
}
