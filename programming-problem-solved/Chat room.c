#include<stdio.h>

int main()
{
    int i,stringLength,a=0;
    char chat[110];
    char hello[5] = {'h','e','l','l','o'};
    gets(chat);

    stringLength = strlen(chat);

    for(i=0;i<stringLength;i++)
    {
        //printf("%c and %c\n",chat[i],hello[a]);
        if(chat[i] == hello[a])
        {
            //printf("%d---%c\n",a,hello[a]);
            a++;
            if(a>=5) break;
        }
    }
    if(a==5) printf("YES\n");
    else printf("NO\n");
}
