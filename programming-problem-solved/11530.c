#include<stdio.h>
#include<string.h>

int main()
{
    int testCase,j,i,count;
    char ch[120];

    scanf("%d",&testCase);

    getchar();

    for(j=1;j<=testCase;j++)
    {
        count = 0;

        gets(ch);
        int chlen = strlen(ch);

        for(i=0;i<chlen;i++)
        {
            if(ch[i]=='a'||ch[i]=='d'||ch[i]=='g'||ch[i]=='j'||ch[i]=='m'||ch[i]=='p'||ch[i]=='t'||ch[i]=='w'||ch[i]==' ')
            {
                count+=1;
            }
            else if(ch[i]=='b'||ch[i]=='e'||ch[i]=='h'||ch[i]=='k'||ch[i]=='n'||ch[i]=='q'||ch[i]=='u'||ch[i]=='x')
            {
                count+=2;
            }
            else if(ch[i]=='c'||ch[i]=='f'||ch[i]=='i'||ch[i]=='l'||ch[i]=='o'||ch[i]=='r'||ch[i]=='v'||ch[i]=='y')
            {
                count+=3;
            }
            else if(ch[i]=='s'||ch[i]=='z')
            {
                count+=4;
            }
        }
        printf("Case #%d: %d\n",j,count);
    }

    return 0;
}
