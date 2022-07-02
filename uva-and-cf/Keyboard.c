#include<stdio.h>
#include<string.h>

int main()
{
    int i, j;
    char l1[10] = "qwertyuiop", l2[10] = "asdfghjkl;", l3[10] = "zxcvbnm,./";
    char ch[110],ch1;

    scanf("%c",&ch1);
    getchar();
    gets(ch);

    int chlen;

    chlen = strlen(ch);

    if(ch1 =='R') {
        for(i = 0; i < chlen; i++) {
            for(j = 0; j < 10; j++) {
                if(ch[i]==l1[j]) printf("%c",l1[j-1]);
                else if(ch[i]==l2[j]) printf("%c",l2[j-1]);
                else if(ch[i]==l3[j]) printf("%c",l3[j-1]);
            }
        }
    }
    else if(ch1 =='L') {
        for(i = 0; i < chlen; i++) {
            for(j = 0; j < 10; j++) {
                if(ch[i]==l1[j]) printf("%c",l1[j+1]);
                else if(ch[i]==l2[j]) printf("%c",l2[j+1]);
                else if(ch[i]==l3[j]) printf("%c",l3[j+1]);
            }
        }
    }
    printf("\n");

    return 0;
}
/*
qwertyuiop
asdfghjkl;
zxcvbnm,./
*/
