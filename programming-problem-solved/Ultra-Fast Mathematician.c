#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int i, nlen;

    char n[110], m[110];

    gets(n);
    gets(m);

    nlen = strlen(n);

    for(i = 0; i < nlen; i++) {
        if(n[i] == '0' && m[i] == '0') printf("0");
        else if(n[i] == '0' && m[i] == '1') printf("1");
        else if(n[i] == '1' && m[i] == '0') printf("1");
        else printf("0");
    }
    printf("\n");

    return 0;
}
