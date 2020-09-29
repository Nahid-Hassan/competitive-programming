#include<stdio.h>
#include<string.h>

int main()
{
    char ch[15];
    int i = 0;
    while(gets(ch)) {
        i++;
        if(ch[0] == '#') {return 0;}
        else if(!strcmp(ch,"HELLO")) printf("Case %d: %s\n",i,"ENGLISH");
        else if(!strcmp(ch,"HOLA")) printf("Case %d: %s\n",i,"SPANISH");
        else if(!strcmp(ch,"HALLO")) printf("Case %d: %s\n",i,"GERMAN");
        else if(!strcmp(ch,"BONJOUR")) printf("Case %d: %s\n",i,"FRENCH");
        else if(!strcmp(ch,"CIAO")) printf("Case %d: %s\n",i,"ITALIAN");
        else if(!strcmp(ch,"ZDRAVSTVUJTE")) printf("Case %d: %s\n",i,"RUSSIAN");
        else printf("Case %d: UNKNOWN\n",i);
    }

    return 0;
}
/**
    Sample Input:

    HELLO
    HOLA
    HALLO
    BONJOUR
    CIAO
    ZDRAVSTVUJTE
    #

    Sample Output:

    Case 1: ENGLISH
    Case 2: SPANISH
    Case 3: GERMAN
    Case 4: FRENCH
    Case 5: ITALIAN
    Case 6: RUSSIAN
**/
