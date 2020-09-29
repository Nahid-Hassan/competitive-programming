/*
#include<stdio.h>

int main()
{
    char ch[10];
    int i=0;

    while(1)
    {
        i++;
        gets(ch);
        if(ch[0] == '*') break;
        else {
            if(ch[0] == 'H') printf("Case %d: Hajj-e-Akbar\n",i);
            if(ch[0] == 'U') printf("Case %d: Hajj-e-Asghar\n",i);
        }
    }

    return 0;
}
*/
#include<stdio.h>

int main()
{
    int a = 0;
    char ch1[10] = "Hajj",ch2[10] = "Umrah",ch3[10];

    gets(ch3);

    while(ch3[0] != '*')
    {
        a++;
        int status = strcmp(ch3,ch1);
        if(status == 0) printf("Case %d: Hajj-e-Akbar\n",a);
        status = strcmp(ch3,ch2);
        if(status == 0) printf("Case %d: Hajj-e-Asghar\n",a);
        gets(ch3);
    }
}
